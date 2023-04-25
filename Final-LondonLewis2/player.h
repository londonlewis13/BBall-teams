#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include<iomanip>
using namespace std;

class player {
int pos;
int ovr;
string name;



public:
player(string name, int pos, int ovr) {
  this->name = name;
  this->pos = pos;
  this->ovr = ovr;
 
  }
void askPName(){
  cout << "What is the Players name?" << endl;
string name;
cin >> name;
if(name == "KD")
  cout << "He's the best player on a team with Kyrie Irving and Ben Simmons." << "His team will beat the Knicks, and The Raptors." << endl;
if(name == "JT")
  cout << "He is a 2-Way threat surrounded by a team full of All-Stars, like Jaylen Brown and Marcus Smart, and also plenty of great role players." << endl;
cout << "His team is the best in this division, and will beat all other teams." << endl;
}

void askPos(){
  cout << "What position is this player?" << endl;
  int pos;
  cin >> pos;
  if(pos > 4 && pos < 6)
    cout << "Center";
  if(pos > 3 && pos < 5)
    cout << "Power Forward";
  if(pos > 2 && pos < 4)
    cout << "Small Forward";
  if(pos > 1 && pos < 3)
    cout << "Shooting Guard";
  if(pos > 0 && pos < 2)
    cout << "Point Guard";
}

void askOvr(){
  cout << "What is the player's overall rating? "<< endl;
  cin >> ovr;
  if(ovr >= 90)
    cout << " He is a Superstar!" << endl;
  if(ovr >= 85 && ovr <= 89)
    cout << " He is an All-Star!" << endl;
  if(ovr >= 78 && ovr <= 84)
    cout << " He is a solid player, but not quite an All-Star." << endl;
  if(ovr >= 70 && ovr <= 77)
    cout << " He is a role player." << endl;
}
void displayAll() {
  cout<< "Their best player is " << name << endl
<< "His overall rating is " << ovr << endl;

};
};

#endif