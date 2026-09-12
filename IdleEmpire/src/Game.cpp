#include <iostream>
#include <conio.h>
#include <stdlib.h>

#include "idleempire/Game.hpp"

Game::Game()
{
    std::cout << "Welcome to IdleEmpire!\n";
}

void Game::run()
{
    while (running)
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
    std::cout << "\nPress T for tutorial or Q to quit.\n";

    char input = _getch();

    switch (input)
    {
    case 't':
    case 'T':
        tutorial();
        break;

    case 'q':
    case 'Q':
        running = false;
        break;

    default:
        std::cout << "Unknown command.\n";
        break;
    }
}

void Game::update()
{
    // Game logic will go here later
}

void Game::render()
{
    // Display game information here later
}

void Game::tutorial()
{
    std::cout << "\nWelcome to the IdleEmpire tutorial!\n";
    std::cout << "(Press any key to continue)\n";
    _getch();

    std::cout << "Your goal is to build an empire and generate as many coins as possible.\n";
    _getch();

    std::cout << "Buildings generate coins for you automatically.\n";
    _getch();

    std::cout << "You can spend your coins on new buildings and upgrades.\n";
    _getch();

    std::cout << "The stronger your empire becomes, the faster you generate coins.\n";
    _getch();

    std::cout << "Good luck, and build your empire!\n";
    _getch();
    system("cls");
}