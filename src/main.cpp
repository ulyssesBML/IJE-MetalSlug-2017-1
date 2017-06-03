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
    MusicComponent musica(background, "musicaBackground", "assets/music/gm.wav");

    GameObject bNew("bNew");
    Animation image_bNew(bNew,"imageBNew", "assets/sprites/bNew.png",510/2,46,2);

    //cadastrando dois tipos de animação, ado butao normal que pega a imagem de 0 a 0 e a mouseON que pega a imagem de 1 a 1
    image_bNew.setAnimation("normal",1,1);
    image_bNew.setAnimation("mouseON",0,0);

    //Adiciona components aos gameobjects
    background.add_component(backgroundImage);
    background.add_component(musica);
    bNew.add_component(image_bNew);

    //adiciona game objects ao menu
    menu.add_game_object(bNew);
    menu.add_game_object(background);

    // =================================== STAGE 1 =======================================

    //Criando cena da fase
    Stage1Scene stage1("Fase 1");
    Game::instance.add_scene(stage1);

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
    plataform.main_positionX = 400; 
    
    ImageComponent backgroundForest(background_stage1,"backgroundForest", "assets/sprites/ms_back.png");
    backgroundForest.set_back_rect(1280, 768);

    ImageComponent tile1(ground_stage1, "tile1", "assets/sprites/ChãoMap1.png");
    ImageComponent tile2(ground_stage1,"tile2", "assets/sprites/ChãoMap2.png");
    ImageComponent tile3(ground_stage1,"tile3", "assets/sprites/ChãoMap3.png");
    ImageComponent tile4(ground_stage1,"tile4", "assets/sprites/ChãoMap4.png");

    ImageComponent img_plataform(plataform,"plataform", "assets/sprites/plataform.png");
    plataform.add_component(img_plataform);
    
    AnimationControllerComponent animCtrl(player, "animationController");
    AnimationControllerComponent monster_controler(player, "monster_controler");

    Animation player_idle(player, "playerIdle", "assets/sprites/idle.png",177/3,76, 3);
    player_idle.setDelay(200);

    Animation player_running(player, "playerRunning", "assets/sprites/walk.png" ,716/7, 160/2, 7);
    player_running.setDelay(100);

    Animation player_attack(player, "playerAttack", "assets/sprites/attack.png" ,211/2, 74, 2);
    player_attack.setDelay(100);

    Animation player_damage(player, "playerDamage", "assets/sprites/damage.png" ,800/8, 50, 8);
    player_damage.setDelay(100);

    
    Animation monster_walk(monster, "monster_walk", "assets/sprites/monster_walk.png" ,153/4, 38, 4);
    monster_walk.setDelay(50);

    MonsterAI monster_ai(monster, "monster_ai",&player,&monster_controler);
    monster_controler.add_animation("monster_walk",monster_walk);
    monster.add_component(monster_walk);
    monster.add_component(monster_controler);
    monster.add_component(monster_ai);

    Player player_logic(player,"player_logic",&animCtrl,&backgroundForest);

    animCtrl.add_animation("player_idle", player_idle);
    animCtrl.add_animation("player_running", player_running);
    animCtrl.add_animation("player_attack", player_attack);
    animCtrl.add_animation("player_damage", player_damage);
    player.add_component(player_idle);
    player.add_component(player_running);
    player.add_component(player_attack);
    //player.add_component(player_damage);
    player.add_component(animCtrl);

    player.add_component(player_logic);

    player.main_positionY = 502;



    background_stage1.add_component(backgroundForest);

    stage1.add_game_object(player);
    // stage1.add_game_object(monster);
    stage1.add_game_object(plataform);
    stage1.add_game_object(ground_stage1);
    stage1.add_game_object(background_stage1);
    //==================================== GAME LOOP ============================================

    Game::instance.run();

    return 0;
}
