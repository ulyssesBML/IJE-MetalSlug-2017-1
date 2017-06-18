#ifndef PLATAFORM_HPP_
#define PLATAFORM_HPP_
#include<iostream>
#include "game.hpp"
#include "components/component.hpp"
#include "components/image.hpp"

using namespace engine;

class Plataform : public Component{

public:
  Plataform(GameObject &_main_game_object, std::string component_id,ImageComponent* background):
    Component(_main_game_object,component_id),back(background),returnRight(false),returnLeft(false){}
  ~Plataform();

  bool init();
  void update();

private:
  bool returnRight;
  bool returnLeft;
  ImageComponent* back;

  unsigned int move_step;
  
};


#endif
  
