#include"soldier.hpp"
#include"game.hpp"
#include<stdio.h>
#include<stdlib.h>

Soldier::~Soldier(){}

int movestep;
int  time_damage;
int life = 2;

bool Soldier::init(){
  _main_game_object->main_positionY = ground - _main_game_object->main_height;
  _main_game_object->main_positionX = 1500;
}

void Soldier::update(){
  if(life > 0 ){
    m_monster_controler->play_animation("soldier_walk",true);
  }
  else{
    m_monster_controler->play_animation("soldier_death");
  }
  
  monster_move = 4;
  gravityF();

  if(m_player->main_positionX > _main_game_object->main_positionX){
    isRight = false;
  }
  else{
    isRight = true;
  }
  
   m_monster_controler->flipping(!isRight);
  if(m_player->main_positionX - 400 > _main_game_object->main_positionX){
    _main_game_object->main_positionX += monster_move;
  }

  else if (m_player->main_positionX + 400 < _main_game_object->main_positionX){
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
      attack = false;
      if(timestep == 0)
	timestep = Game::instance.timer->getTicks()+100;

      if(Game::instance.timer->getTicks() > timestep){
	_main_game_object->main_positionX = 2000;
	timestep = 0;
	life = 4;
	_main_game_object->setState(GameObject::State::disabled);
      }
    }

  }

  movestep = _main_game_object->main_positionX;

  if( Game::instance.keyboard->isKeyDown(SDLK_d)){
    returnRight = true;
  }
  if( Game::instance.keyboard->isKeyUp(SDLK_d)){
    returnRight = false;
  }
  if( Game::instance.keyboard->isKeyDown(SDLK_a)){
    returnLeft = true;
  }
  if( Game::instance.keyboard->isKeyUp(SDLK_a)){
    returnLeft = false;
  }
  
  
  
  if(m_player->main_positionX >= 900 && returnRight){
    _main_game_object->main_positionX -= 7;
  }
  if(m_player->main_positionX <= 100 && returnLeft) {
    _main_game_object->main_positionX += 7;
  } 


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
