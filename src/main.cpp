#include "game.hpp"
#include "gameobject.hpp"
#include "scene.hpp"
#include "components/image.hpp"
#include "components/animation.hpp"
#include "components/animation_controller.hpp"
#include "components/music.hpp"
#include "sdl2core.hpp"
#include "menu_scene.hpp"
#include "stage1_scene.hpp"

#include "monsterAI.hpp"
#include "player.hpp"
#include "soldier.hpp"
#include "plataform.hpp"

using namespace engine;

int main(int, char **){

    //Configurando nome e tamanho
    std::pair<int, int> window_size(1280, 768);
    Game::instance.set_properties("Nome do Jogo",window_size);

    //================================================= MENU =======================================
    MenuScene menu("Main Menu");
    Game::instance.add_scene(menu);

    GameObject background("background");
    ImageComponent backgroundImage(background,"imageBackground", "assets/sprites/menu_m.png");
    GameObject bNew("bNew");
    Animation image_bNew(bNew,"imageBNew", "assets/sprites/bNew.png",510/2,46,2);

    //cadastrando dois tipos de animação, ado butao normal que pega a imagem de 0 a 0 e a mouseON que pega a imagem de 1 a 1
    image_bNew.setAnimation("normal",1,1);
    image_bNew.setAnimation("mouseON",0,0);

    //Adiciona components aos gameobjects
    background.add_component(backgroundImage);
    bNew.add_component(image_bNew);

    //adiciona game objects ao menu
    menu.add_game_object(bNew);
    menu.add_game_object(background);

    // =================================== STAGE 1 =======================================

   
    //Criando cena da fase
    Stage1Scene stage1("Fase 1");
    Game::instance.add_scene(stage1);




 //bullets

    GameObject bullet1("bullet1",true,"bullet_player",GameObject::State::disabled);
    ImageComponent img_bullet1(bullet1,"bullet1", "assets/sprites/bullet.png");
    bullet1.add_component(img_bullet1);
     GameObject bullet2("bullet2",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet2(bullet2,"bullet2", "assets/sprites/bullet.png");
    bullet2.add_component(img_bullet2);
     GameObject bullet3("bullet3",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet3(bullet3,"bullet3", "assets/sprites/bullet.png");
    bullet3.add_component(img_bullet3);
     GameObject bullet4("bullet4",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet4(bullet4,"bullet4", "assets/sprites/bullet.png");
    bullet4.add_component(img_bullet4);
     GameObject bullet5("bullet5",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet5(bullet5,"bullet1", "assets/sprites/bullet.png");
    bullet5.add_component(img_bullet5);
     GameObject bullet6("bullet6",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet6(bullet6,"bullet6", "assets/sprites/bullet.png");
    bullet6.add_component(img_bullet6);
     GameObject bullet7("bullet7",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet7(bullet7,"bullet7", "assets/sprites/bullet.png");
    bullet7.add_component(img_bullet7);
    GameObject bullet8("bullet8",true,"bullet",GameObject::State::disabled);
    ImageComponent img_bullet8(bullet1,"bullet8", "assets/sprites/bullet.png");
    bullet8.add_component(img_bullet8);

    stage1.add_game_object(bullet1);
    stage1.add_game_object(bullet2);
    stage1.add_game_object(bullet3);
    stage1.add_game_object(bullet4);
    stage1.add_game_object(bullet5);
    stage1.add_game_object(bullet6);
    stage1.add_game_object(bullet7);
    stage1.add_game_object(bullet8);
    
    //./bullets
    




    
    GameObject player("player");
    GameObject plataform("plataform",true,"ground");
    GameObject monster("monster",true,"monster");
    GameObject background_stage1("backgroundForest");
    GameObject ground_stage1("ground",true,"ground");
    ground_stage1.main_positionY = 700;
    ground_stage1.main_positionX = 0; 
    ground_stage1.main_width = 1280;
    ground_stage1.main_height = 200;

    plataform.main_positionY = 400;
    plataform.main_positionX = 500; 
    
    ImageComponent backgroundForest(background_stage1,"backgroundForest", "assets/sprites/n_back.png");
    backgroundForest.set_back_rect(1280, 768);


    ImageComponent img_plataform(plataform, "plataform", "assets/sprites/plat.png");
    Plataform plataform_logic(plataform, "plataform_logic",&backgroundForest);
    plataform.add_component(plataform_logic);
    plataform.add_component(img_plataform);

    
    AnimationControllerComponent animCtrl(player, "animationController");
    AnimationControllerComponent monster_controler(player, "monster_controler");

    Animation player_idle(player, "playerIdle", "assets/sprites/idle.png",89,364/3, 3);
    player_idle.setDelay(100);

    Animation player_running(player, "playerRunning", "assets/sprites/walk.png" ,97, 1092/9, 9);
    player_running.setDelay(100);

    Animation player_attack(player, "playerAttack", "assets/sprites/attack.png" ,156, 238/2, 2);
    player_attack.setDelay(100);

    Animation player_damage(player, "playerDamage", "assets/sprites/damage.png" ,102, 1224/9, 9);
    player_damage.setDelay(50);



    
    Animation monster_walk(monster, "monster_walk", "assets/sprites/tank1.png" ,383, 958/4, 4);
    monster_walk.setDelay(50);

    Animation monster_damage(monster, "monster_damage", "assets/sprites/tank_damage.png" ,383, 958/4, 4);
    monster_walk.setDelay(50);

    MonsterAI monster_ai(monster, "monster_ai",&player,&monster_controler);
    monster_controler.add_animation("monster_walk",monster_walk);
    monster_controler.add_animation("monster_damage",monster_damage);
    monster.add_component(monster_walk);
    monster.add_component(monster_damage);
    monster.add_component(monster_controler);
    monster.add_component(monster_ai);


    //soldier
    GameObject soldier1("soldier1");
    AnimationControllerComponent soldier1_controler(soldier1, "monster_controler");
    Animation soldier1_walk(soldier1, "soldier_walk", "assets/sprites/s_walk.png" ,92, 1459/11, 11);
    soldier1_walk.setDelay(50);

    Animation soldier1_attack(soldier1, "soldier_attack", "assets/sprites/sol_attack.png" ,211, 405/3, 3);
    soldier1_attack.setDelay(50);


    Soldier soldier1_ai(soldier1, "soldier1_ai",&player,&soldier1_controler);
    soldier1_controler.add_animation("soldier_walk",soldier1_walk);
    soldier1_controler.add_animation("soldier_attack",soldier1_attack);

    soldier1.add_component(soldier1_walk);
    soldier1.add_component(soldier1_attack);
    soldier1.add_component(soldier1_controler);
    soldier1.add_component(soldier1_ai);
    
    //./soldier

    
    Player player_logic(player,"player_logic",&animCtrl,&backgroundForest);

    animCtrl.add_animation("player_idle", player_idle);
    animCtrl.add_animation("player_running", player_running);
    animCtrl.add_animation("player_attack", player_attack);
    animCtrl.add_animation("player_damage", player_damage);
    player.add_component(player_idle);
    player.add_component(player_running);
    player.add_component(player_attack);
    player.add_component(player_damage);
    player.add_component(animCtrl);

    player.add_component(player_logic);

    player.main_positionY = 502;



    background_stage1.add_component(backgroundForest);

    stage1.add_game_object(player);
    stage1.add_game_object(soldier1);
    stage1.add_game_object(monster);
    stage1.add_game_object(plataform);
    stage1.add_game_object(ground_stage1);
    stage1.add_game_object(background_stage1);
    //==================================== GAME LOOP ============================================

    Game::instance.run();

    return 0;
}
