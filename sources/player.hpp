#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>
#include <stdexcept>

using namespace std;
namespace ariel{}

    class Player
    {
        private:
            string player_name;
            bool is_playing;
        public:
            Player();
            Player(string P_name);
            string getName();
            void setName(string new_name);
            int stacksize();
            int cardesTaken();
            bool IsPlaying();
            void setIsPlaying(bool Player_status);
            
    
    };
#endif