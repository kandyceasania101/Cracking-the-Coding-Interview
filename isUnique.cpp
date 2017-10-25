//
//Objective: Implement an algorithm to determine if a string has all unique characters
//Language: C++
//
//Kandyce Burks
//

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

//
//return a boolean value
//to determine if all characters are unique
//
bool isUnique(string a){

  bool ascii[128] = {false}; //number of numeric and alpha-numeric characters -- could also extended ASCII 256 if needed
  
  for (auto character : a){
  
    if(ascii[(int)character]) return false;
    
    ascii[(int)character] = true;
  }
  return true;
}

int main(){
  
  string s;
  getline( cin , s );
  
  if (!isUnique(s)) { cout << "NO:("; return 0;}
    
  cout << "YES! :)" << endl;
  
  return 0;
  
}
