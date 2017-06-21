#include "returnMenu.hpp"


ReturnMenu::~ReturnMenu(){}

bool ReturnMenu::init(){
  returnM = false;
}

void ReturnMenu::update(){
  if(Game::instance.keyboard->isKeyDown(SDLK_SPACE)){
    returnM = true;
  }
  if(Game::instance.keyboard->isKeyUp(SDLK_SPACE)){
    returnM= false;
  }

  if(returnM){
    Game::instance.change_scene("Main Menu");
  }

}
