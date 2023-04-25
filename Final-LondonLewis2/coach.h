#ifndef COACH_H
#define COACH_H

#include "player.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class coach {
  string name;

public:
  coach(string name) { this->name = name; }

  string getName() { return name; }

  void display() { 
    cout << "Coach " << name << endl; 
  }

  void displayCoach() {
    cout<< "Their Coach is " << name << endl;
  }
};


#endif
