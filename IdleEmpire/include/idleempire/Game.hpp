#pragma once

class Game {
public:
    Game();

    void run();

private:
    void processEvents();
    void update();
    void render();
    void tutorial();

    bool running = true;
};