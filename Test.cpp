#include <iostream>
#include <string>
#include <stdexcept>
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
using namespace std;


TEST_CASE("check function in class player"){
    Player p1("alice");
    Player p2("BOB");
    CHECK_NOTHROW(Player p1("alice"));
    CHECK_NOTHROW(Player p2("BOB"));
    CHECK(p1.getName().compare("alice")==0);
    CHECK(p1.IsPlaying()==true);
    CHECK(p2.getName().compare("BOB")==0);
    CHECK(p2.IsPlaying()==true);
    bool playerS=false;
    CHECK_NOTHROW(p1.setIsPlaying(playerS));
    CHECK_NOTHROW(p2.setIsPlaying(playerS));
}
TEST_CASE("check functions in class game"){
    Player p1("alice");
    Player p2("BOB");
    CHECK_NOTHROW(Game{p1,p2});
    Game game(p1,p2);
    CHECK_NOTHROW(game.playTurn());
    CHECK(p1.stacksize()<=26);
    CHECK(p2.stacksize()<=26);
    CHECK(p1.cardesTaken()>=0);
    CHECK(p2.cardesTaken()>=0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
    bool playerS=false;
    CHECK_NOTHROW(p1.setIsPlaying(playerS));
    CHECK_NOTHROW(p2.setIsPlaying(playerS));
}










