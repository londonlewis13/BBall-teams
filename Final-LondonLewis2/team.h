#ifndef TEAM_H
#define TEAM_H

#include "coach.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class team {
  string tname;
  
  
public:
  team(string tname){
 this->tname = tname; }
//team(string tname, coach c, player nm1) : headcoach(c), bestplayer(nm1)// 
  void TeamName() {
    string tname;
  if (tname == "Nets")
   cout << "You have chosen the Nets" << endl;
  else if (tname == "Celtics")
     cout << "You have chosen the Celtics" << endl;
    
  else if (tname == "76ers")
      cout << "You have chosen the 76ers" << endl;
    
  else if (tname == "Knicks")
      cout << "You have chosen the Knicks" << endl;
    
  else if (tname == "Raptors")
      cout << "You have chosen the Raptors" << endl;
    else
      cout << "Team Doesn't Exist.";
  }
void displayTeam() {
  cout << "You have chosen the " << tname << endl;
}
};

#endif