#include"monsterAI.hpp"
#include"game.hpp"
#include<stdio.h>
#include<stdlib.h>

MonsterAI::~MonsterAI(){}

int timestep;

bool MonsterAI::init(){
     _main_game_object->main_positionY = ground - _main_game_object->main_height;
     _main_game_object->main_positionX = 1500;
     _main_game_object->setState(GameObject::State::disabled);
     life = 10;
     dead = false;
}

void MonsterAI::update(){
  if(!dead){
  m_monster_controler->play_animation("monster_walk",true);
  
  if(Game::instance.timer->getTicks() > timestep){
    timestep =  Game::instance.timer->getTicks() + 1000;
    monster_move = (rand() % 4);
  }

  m_monster_controler->play_animation("monster_walk");
  gravityF();

  if(m_player->main_positionX > _main_game_object->main_positionX){
    m_monster_controler->flipping(true);
    _main_game_object->main_positionX += monster_move;
  }

  else{
    m_monster_controler->flipping(false);
    _main_game_object->main_positionX -= monster_move;
  }

  //monster jump
  if(_main_game_object->main_positionY > m_player->main_positionY + 30){
    //dy += jumpF;
   }


  if(Game::instance.collision_manager->checkCollision(_main_game_object,"bullet_player")){
    m_monster_controler->play_animation("monster_damage");
    
    if(Game::instance.timer->getTicks() > time_damage){
      life--;
      std::cout<<life<<std::endl;
      time_damage = Game::instance.timer->getTicks()+1000;
    }
    if(life <=0){
      dead = true;
    }
  }
  processPos();
  }
  else{
    Game::instance.change_scene("you_win");
  }
}
void MonsterAI::processPos()
{
  //std::cout<<dy<<std::endl;
   _main_game_object->main_positionY -= dy;   // current velocity components.
}


void MonsterAI::gravityF(){
  if(_main_game_object->main_positionY > (ground - _main_game_object->main_height)){
     _main_game_object->main_positionY = ground - _main_game_object->main_height;
  }
  if ( (_main_game_object->main_positionY + _main_game_object->main_height) < ground ){
         dy -= gravity;
  }

  else{
    //     dy = 0;
  }
}
