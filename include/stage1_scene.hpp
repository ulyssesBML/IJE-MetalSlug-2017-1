#ifndef __STAGE1_H__
#define __STAGE1_H__

#include <scene.hpp>
#include "components/animation.hpp"
#include "components/animation_controller.hpp"
#include "player.hpp"
#include "soldier.hpp"

using namespace engine;

class Stage1Scene : public Scene{
    public:

   Stage1Scene(std::string name):
     Scene(name){}//, jumptime(0), walkR(false), walkL(false), jump(false), attack(false), damageBool(false){}


    ~Stage1Scene();


  void game_logic();

    private:
  GameObject *tank;
  GameObject *background;
  GameObject *player;
  GameObject *soldier1;
  Player *player_controller;
  Soldier *soldier1_controller;
  ImageComponent *back_img;

  
  GameObject *bullet1;
  GameObject *bullet2;

  bool bulletDir1;
  bool bulletDir2;
};

#endif
