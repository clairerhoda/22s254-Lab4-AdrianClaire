#include "GroupNames.h"
#include <iostream>
#include <fstream>
using namespace std;
GroupNames(t);

void GroupNames::printNames(){
  ifstream readFile;
  readFile.open(t);
  while(readFile>>names){
    cout << names;
  }
  readFile.close(); 
}
