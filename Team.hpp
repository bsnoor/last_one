#include <string>
#include <map>
#include <iostream>
#include <vector>
using namespace std;
 namespace ball{
     class Team{
         string name;
         float skill;
         public:
         Team();
         Team( const string name ,  const float skill):name(name), skill(skill){}
         

     };

 }
