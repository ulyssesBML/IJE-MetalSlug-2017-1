#include"soldier.hpp"
#include"game.hpp"
#include<stdio.h>
#include<stdlib.h>

Soldier::~Soldier(){}

int movestep;
int  time_damage;
int life = 4;

bool Soldier::init(){
     _main_game_object->main_positionY = ground - _main_game_object->main_height;
     _main_game_object->main_positionX = 1500;
}

void Soldier::update(){

  m_monster_controler->play_animation("soldier_walk",true);
  
  monster_move = 4;
  gravityF();

  if(m_player->main_positionX - 400 > _main_game_object->main_positionX){
    isRight = false;
    m_monster_controler->flipping(true);
    _main_game_object->main_positionX += monster_move;
  }

  else if (m_player->main_positionX + 400 < _main_game_object->main_positionX){

    isRight = true;
    m_monster_controler->flipping(false);
    _main_game_object->main_positionX -= monster_move;
  }

  //attack
  if(movestep == _main_game_object->main_positionX){
    m_monster_controler->play_animation("soldier_attack");
    attack = true;
  }
  else{
    attack = false;
  }

  if(Game::instance.collision_manager->checkCollision(_main_game_object,"bullet_player")){
      if(Game::instance.timer->getTicks() > time_damage){
	life--;
	std::cout<<life<<std::endl;
	time_damage = Game::instance.timer->getTicks() + 1000;
      }
      if(life <= 0){
	_main_game_object->main_positionX = 2000;
	attack = false;
	life = 4;
	_main_game_object->setState(GameObject::State::disabled);
      }

  }

  movestep = _main_game_object->main_positionX;
  processPos();
}
void Soldier::processPos()
{
  //std::cout<<dy<<std::endl;
   _main_game_object->main_positionY -= dy;   // current velocity components.
}


void Soldier::gravityF(){
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
