#ifndef RETURNMENU_HPP_
#define RETURNMENU_HPP_

#include <iostream>
#include "components/animation_controller.hpp"
#include "components/image.hpp"
#include "game.hpp"
#include "components/component.hpp"

using namespace engine;

class ReturnMenu : public Component{

public:
  ReturnMenu(GameObject &_main_game_object, std::string component_id):
    Component(_main_game_object,component_id){}
  ~ReturnMenu();

  bool init();
  void update();

private:
  bool returnM;
};


#endif
  
