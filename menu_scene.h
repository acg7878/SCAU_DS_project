#ifndef SCAU_DS_PROJECT_MENU_SCENE_H
#define SCAU_DS_PROJECT_MENU_SCENE_H

#include <iostream>

#include "scene.h"
class MenuScene : public Scene {
public:
    MenuScene() = default;
    ~MenuScene() = default;

    void on_enter() {
        std::cout << "�������˵�" << std::endl;
    }

    void on_update() {
        std::cout << "��������" << std::endl;
    }
    void on_draw() {
        outtextxy(10, 10, _T("���˵���ͼ"));
    }
    void on_input(const ExMessage &msg) {
    }
    void on_exit() {
        std::cout << "�˳�" << std::endl;
    }
};

#endif//SCAU_DS_PROJECT_MENU_SCENE_H
