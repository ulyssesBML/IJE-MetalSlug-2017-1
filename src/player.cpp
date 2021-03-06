#include "player.hpp"

bool canJump = true;
bool jump = false;
bool isFalling = false;

int maxHeight = 200;
float gravity = 1;
float jumpF = 25;
float moveForce = 7;
float monster_move = 4;
float prev_position_y;

float dy = 0;

bool Player::init(){
  back->imagePart->x = 0;
  isRight = true;
  life = 6;
  walkR =false;
  walkL =false;
  jump =false;
  attack =false;
  damage = false;
  return true;
}

// ================================================= GAME LOGIC ====================================================
void Player::update(){
  if(!damage)
    animCtrl->play_animation("player_idle");

    gravityF();
    jump_player();
    move_player();
    attack_player();


    if(Game::instance.collision_manager->checkCollision(_main_game_object,"monster")  ||
       Game::instance.collision_manager->checkCollision(_main_game_object,"bullet")){
          animCtrl->play_animation("player_damage");
	  damage = true;

	  if(time_damage < Game::instance.timer->getTicks()){
	    life --;
	    time_damage = Game::instance.timer->getTicks()+ 1000;
	    std::cout<<life<<std::endl;
	    if(life<=0){
	      walkR =false;
	      walkL =false;
	      jump =false;
	      attack =false;
	      damage = false;
	      animCtrl->play_animation("player_idle");
	      Game::instance.change_scene("game_over");
	    }
	  }
    }

    if(Game::instance.timer->getTicks() > Ttime){
      Ttime =  Game::instance.timer->getTicks() + 1000;
      damage = false;
    }

    processPos();
}

// // ============================================= ATTACK LOGIC ===================================================
void Player::attack_player(){

    if(Game::instance.keyboard->isKeyDown(SDLK_SPACE)){
        attack = true;
    }

    if(Game::instance.keyboard->isKeyUp(SDLK_SPACE)){
        attack = false;
    }

    if(attack){
      animCtrl->play_animation("player_attack");
    }else{

    }
}

// // ============================================== MOVE LOGIC ===================================================
void Player::move_player(){
//     //Detect move right
    if(Game::instance.keyboard->isKeyDown(SDLK_d)){
        walkR= true;
    }
    if(Game::instance.keyboard->isKeyUp(SDLK_d)){
        walkR= false;
    }
//
    //Detect move left
    if(Game::instance.keyboard->isKeyDown(SDLK_a)){
        walkL= true;
    }
    if(Game::instance.keyboard->isKeyUp(SDLK_a)){
        walkL= false;
    }
//
    if(walkR && (_main_game_object->main_positionX+_main_game_object->main_width)<1000){
        isRight = false;
	animCtrl->play_animation("player_running");
	animCtrl->flipping(isRight);
	_main_game_object->main_positionX += moveForce;

    } else if(walkL && (_main_game_object->main_positionX)>=0 ){
        isRight = true;
        animCtrl->play_animation("player_running");
        animCtrl->flipping(isRight);
        _main_game_object->main_positionX -= moveForce;
    }
    if(_main_game_object->main_positionX >= 900 && walkR){
      animCtrl->play_animation("player_running");
      back->move_img_rect(7);
    }
    if(_main_game_object->main_positionX <= 100 && walkL){
      animCtrl->play_animation("player_running");
      back->move_img_rect(-7);
    }



    
}

// //=========================================== JUMP LOGIC==========================================
void Player::jump_player(){
    //Player try jump and he can jump
  if(Game::instance.keyboard->isKeyDown(SDLK_w) && (dy==0)){
       jump = true;
       dy -= jumpF;
    }
}

void Player::processPos()
{
     prev_position_y = _main_game_object->main_positionY;
     _main_game_object->main_positionY += dy;   // current velocity components.
}


void Player::gravityF(){
  if (!has_ground()){      // If the player is not on the platform
    dy += gravity;
  }

  else{
    dy = 0;
  }
}
bool Player::has_ground(){
  ground = Game::instance.collision_manager->checkCollision(_main_game_object,"ground"); 
  if(ground && dy>=0 ){
    if(dy>5){
      _main_game_object->main_positionY = ground->main_positionY - _main_game_object->main_height ;// prev_position_y -(dy-gravity) ;

    }
    return true;
  }
  return false;
  
}

Player::~Player(){}
