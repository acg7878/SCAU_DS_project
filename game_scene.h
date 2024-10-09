#ifndef SCAU_DS_PROJECT_GAME_SCENE_H
#define SCAU_DS_PROJECT_GAME_SCENE_H

#include <iostream>

#include "scene.h"
class GameScene : public Scene {
public:
    GameScene() = default;
    ~GameScene() = default;

    void on_enter() {
        std::cout << "进入游戏场景" << std::endl;
    }

    void on_update() {
        std::cout << "正在运行" << std::endl;
    }
    void on_draw() {
        outtextxy(10, 10, _T("游戏局内绘图"));
    }
    void on_input(const ExMessage &msg) {
    }
    void on_exit() {
        std::cout << "局内退出" << std::endl;
    }
};
#endif//SCAU_DS_PROJECT_GAME_SCENE_H
