#include <string>
#include <map>
#include <iostream>
#include <vector>
using namespace std;
 namespace ball{
     class Leauge{
         string name;
         double skill;
         public:
         Leauge();
         Leauge( const string name ,  const float skill):name(name), skill(skill){}
         

     };

 }
