#ifndef SCAU_DS_PROJECT_SCENE_H
#define SCAU_DS_PROJECT_SCENE_H

#include <graphics.h>

class Scene {
public:
    Scene() = default;
    ~Scene() = default;

    virtual void on_enter() {}
    virtual void on_input(const ExMessage& msg) {}
    virtual void on_update() {}
    virtual void on_draw() {}
    virtual void on_exit() {}

private:
};
#endif//SCAU_DS_PROJECT_SCENE_H
