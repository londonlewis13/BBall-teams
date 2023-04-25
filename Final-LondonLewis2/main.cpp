#include <iostream>
#include <string>
#include <vector>
#include "coach.h"
#include "player.h"
#include "team.h"
#include "city.h"

using namespace std;

int main(){
  srand(time(NULL));
  team randomT = team("RANDOM");
city Upick = city("RANDOM", randomT);
  Upick.askCityName();
  Upick.askCityName2();
  
  int v = rand() % 2;
    if(v==0)
      cout << "Team 1 wins!" << endl;
    else
      cout <<"Team 1 has been upset by Team 2! WOW Unexpected!!" << endl;
//player randomP = player("Random Ran",0, 0);
//coach randomC = coach("Coach Random");

  
  //cout << " The coach's name is Steve Nash and he is a perimeter centric coach." << endl << "Their best player is Kevin Durant, a 3-level scorer at the small forward." << endl;
  
  
}
  

