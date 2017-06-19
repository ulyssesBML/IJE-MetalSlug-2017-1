#ifndef SOLDIER_HPP_
#define SOLDIER_HPP_
#include<iostream>
#include "components/component.hpp"
#include "components/animation_controller.hpp"

using namespace engine;

class Soldier : public Component{

public:
  Soldier(GameObject &_main_game_object, std::string component_id, GameObject *player, AnimationControllerComponent *monster_controler):
    Component(_main_game_object,component_id), m_player(player), m_monster_controler(monster_controler),dy(0),timestep(0){}
  ~Soldier();

  bool init();
  void update();

  bool attack;
  bool isRight;
private:
  void gravityF();
  void processPos();


  float monster_move = 4;
  const int ground = 700;
  const int gravity = 1;
  const float jumpF = 2;
  int unsigned timestep;
  float dy;

  bool returnRight;
  bool returnLeft;
  
  GameObject* m_player;
  AnimationControllerComponent* m_monster_controler;
  
};


#endif
  
