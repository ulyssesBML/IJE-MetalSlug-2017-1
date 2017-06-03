#include "menu_scene.hpp"

void MenuScene::game_logic(){

    //pega objeto menuFire
    //define a posicao do fogona tela

    //Gerenciando botões na cena
    buttons_controller();

}

void MenuScene::buttons_controller(){
    //pega gameobject bNew
    GameObject* bNew = &get_game_object("bNew");
    //define a posicao do botao novo jogo na tela
    bNew->main_positionX = 500;
    bNew->main_positionY = 270;

    Animation* bnewAnimation = (dynamic_cast<Animation *>(bNew->get_component("imageBNew")));

    //Faz efeito de passar o mause em cima
    if(Game::instance.mouse->is_over(bNew)){
        if (Game::instance.mouse->is_right_button()) {
            Game::instance.change_scene("Fase 1");
        }
        bnewAnimation->useAnimation("normal");
    }
    else{
        bnewAnimation->useAnimation("mouseON");
    }
}

MenuScene::~MenuScene(){}
