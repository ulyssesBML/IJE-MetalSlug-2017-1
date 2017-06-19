#include "stage1_scene.hpp"
#include "components/component.hpp"
#include "components/animation_controller.hpp"

// ================================================= GAME LOGIC ====================================================
void Stage1Scene::game_logic(){
  tank = &get_game_object("monster");
  player = &get_game_object("player");
  soldier1 = &get_game_object("soldier1");
  background = &get_game_object("backgroundForest");

   
  back_img =  (dynamic_cast<ImageComponent *>(background->get_component("backgroundForest")));
  player_controller =  (dynamic_cast<Player *>(player->get_component("player_logic")));
  soldier1_controller =  (dynamic_cast<Soldier *>(soldier1->get_component("soldier1_ai")));

  if(tank->state() == GameObject::State::disabled && back_img->imagePart->x > 6000){

  
    tank->setState(GameObject::State::enabled);

  }
  if(soldier1->state() == GameObject::State::disabled &&(
     (back_img->imagePart->x > 1000  && back_img->imagePart->x < 1500)||
     (back_img->imagePart->x > 3000  && back_img->imagePart->x < 3500)||
     (back_img->imagePart->x > 4000  && back_img->imagePart->x < 4500)||
     (back_img->imagePart->x > 5000  && back_img->imagePart->x < 5500)))
  {  
    soldier1->setState(GameObject::State::enabled);
  }


  //bullet
 
  bullet1 = &get_game_object("bullet1");
  bullet2 = &get_game_object("bullet2");
  //./bullet



  //Para alguem que ler: esse codigo ja ta uma merda msm algumas duplicaçoes de codigo não vai piorar essa cagada
  if(player_controller->attack){
    if(bullet1->state() == GameObject::State::disabled){
      bulletDir1 = !player_controller->isRight;
      bullet1->main_positionX = player->main_positionX + player->main_width;
      bullet1->main_positionY = player->main_positionY;
    }
    bullet1->setState(GameObject::State::enabled);
  }
   
  if(bullet1->state() == GameObject::State::enabled){
    if(bulletDir1){
      bullet1->main_positionX += 30;
    }
    else{
	
      bullet1->main_positionX -= 30;
    }
  }
  if(bullet1->main_positionX > 1300 || bullet1->main_positionX < 0){
    bullet1->setState(GameObject::State::disabled);
      
  }



  if(soldier1_controller->attack){
    if(bullet2->state() == GameObject::State::disabled){
      bulletDir2 = !soldier1_controller->isRight;
      bullet2->main_positionX = soldier1->main_positionX + player->main_width;
      bullet2->main_positionY = soldier1->main_positionY;
    }
    bullet2->setState(GameObject::State::enabled);
  }
   
  if(bullet2->state() == GameObject::State::enabled){
    if(bulletDir2){
      bullet2->main_positionX += 30;
    }
    else{
	
      bullet2->main_positionX -= 30;
    }
  }
  if(bullet2->main_positionX > 1300 || bullet2->main_positionX < 0){
    bullet2->setState(GameObject::State::disabled);
      
  }

}
Stage1Scene::~Stage1Scene(){}
