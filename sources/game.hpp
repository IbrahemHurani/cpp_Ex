#ifndef GAME_HPP
#define GAME_HPP

#include<string>
#include "player.hpp"
using namespace std;
namespace ariel{}
    class Game{
        public:
        Player player1,player2;
        Game();
        Game(Player p1,Player p2);
        void playTurn();
        void printLastTurn();
        void playAll();
        void printLog();
        void printStats();
        void printWiner();


    };
#endif