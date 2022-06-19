#include <string>
#include <map>
#include <iostream>
#include <vector>
#include "Team.hpp"
using namespace std;
 namespace ball{
     class Game{

        Team* home;
        Team* out;
        int home_score;
        int out_score;
        public:
        Game();
        Game(Team *home ,Team *out , int hs , int os): home(home) ,out(out),home_score(-1),out_score(-1){}

     };

 }
