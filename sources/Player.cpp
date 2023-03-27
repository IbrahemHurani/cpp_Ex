#include <string>
#include <stdexcept>
#include "player.hpp"
using namespace std;
Player::Player(){

}
Player::Player(string name_player){

}
string Player::getName(){
    return this->player_name;

}
void Player::setName(string new_name){

}
int Player::cardesTaken(){
	return 0;
}
int Player::stacksize(){
	return 0;

}
bool Player::IsPlaying(){
	return true;

}
void Player::setIsPlaying(bool Player_status){

}


