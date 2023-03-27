#include <iostream>
#include <string>
#include <stdexcept>
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include "doctest.h"
using namespace std;


TEST_CASE("check the constructor class Card"){
    int number_of_cards=52;
    CHECK_NOTHROW(Card{number_of_cards});
}
TEST_CASE("check the constructor class Player"){
    CHECK_NOTHROW(Player p("alice"));
}
TEST_CASE("check function setname in class Player"){
    Player p1("alice");
    CHECK_NOTHROW(p1.setName("bob"));
}
TEST_CASE("check function cadrsTaken"){
    Player p1("bob");
    CHECK(p1.cardesTaken()>=0);
}
TEST_CASE("check function staksize"){
    Player p("bob");
    CHECK(p.stacksize()<=26);

}
TEST_CASE("check function isPlaying"){
    Player p("bob");
    CHECK(p.IsPlaying()==true);
}
TEST_CASE("check constructor class Game"){
    Player p1("me");
    Player p2("other");
    CHECK_NOTHROW(Game{p1,p2});

}
TEST_CASE("check functions in class game"){
    Player p1("alice");
    Player p2("BOB");
    CHECK(p1.getName().compare("alice")==0);
    CHECK(p2.getName().compare("BOB")==0);
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










}
