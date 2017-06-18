#include "plataform.hpp"

bool Plataform::init(){

}

void Plataform::update(){
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

  if(returnRight && move_step != back->imagePart->x){
    _main_game_object->main_positionX -= 7;
  }
  if(returnLeft && move_step != back->imagePart->x) {
    _main_game_object->main_positionX += 7;
  }


  move_step = back->imagePart->x;


  if(_main_game_object->main_positionX < -300){
    _main_game_object->main_positionX = 1400 ;
  }
  if(_main_game_object->main_positionX > 1500){
    _main_game_object->main_positionX = -200;
  }
  
  
}


Plataform::~Plataform(){}
