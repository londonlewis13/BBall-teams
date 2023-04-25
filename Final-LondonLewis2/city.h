#ifndef CITY_H
#define CITY_H

#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
#include "team.h"

using namespace std;

class city {
  string cityname;
  team nba;

public:
team BK = team("Nets");
team BO = team("Celtics");
team TO = team("Raptors");
team NY = team("Knicks");
team PH = team("76ers");
coach JM = coach("Joe Mazzulla");
coach SN = coach("Steve Nash");
coach DR = coach("Doc Rivers");
coach TT = coach("Tom Thibodeau");
coach NN = coach("Nick Nurse");
player kd = player("Kevin Durant",3, 96);
player jt = player("Jayson Tatum", 3, 95);
player je = player("Joel Embiid", 5, 96);
player jb = player("Jaylen Brunson", 1, 87);
player ps = player("Pascal Siakam", 4, 88);

  city(string cityname, team b) : nba(b) { this->cityname = cityname;}
  void askCityName() {
    string cityname;
    cout << "Choose team 1's city! *top 2 team in Atlantic Division for best result*" << endl;
    cin >> cityname;
if(cityname == "Brooklyn")
   BK.displayTeam(), kd.displayAll(), SN.displayCoach();
  else if(cityname == "Boston")
     BO.displayTeam(), jt.displayAll(), JM.displayCoach();
  else if(cityname == "NewYork")
    NY.displayTeam(), jb.displayAll(), TT.displayCoach();
  else if(cityname == "Toronto")
    TO.displayTeam(), ps.displayAll(), NN.displayCoach();
  else if(cityname == "Philadelphia")
    PH.displayTeam(), je.displayAll(), DR.displayCoach();
  else
    cout << "Not a top 3 team in Atlantic Division" << endl;
}
void askCityName2() {
    string cityname;
    cout << "" << endl;
    cout << "Choose team 2's city!" << endl;
    cin >> cityname;
if(cityname == "Brooklyn")
   BK.displayTeam(), kd.displayAll(), SN.displayCoach();
  else if(cityname == "Boston")
     BO.displayTeam(), jt.displayAll(), JM.displayCoach();
  else if(cityname == "NewYork")
    NY.displayTeam(), jb.displayAll(), TT.displayCoach();
  else if(cityname == "Toronto")
    TO.displayTeam(), ps.displayAll(), NN.displayCoach();
  else if(cityname == "Philadelphia")
    PH.displayTeam(), je.displayAll(), DR.displayCoach();
  else
    cout << "Not a bottom 2 team in Atlantic Division" << endl;
}
};
      
  #endif
  