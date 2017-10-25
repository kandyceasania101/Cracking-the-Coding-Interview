//
//
//Objective: Given a string, write a function to check 
//if it is a permutation of a palidrome. A palidrome is a word
//or phrase that is the same forwards and backwards. A permutation is
//a rearrangement of letters. The palidrome does not need to be limited to just dictionary words.
//
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
//NOTES: Needs no more than 1 odd ascii set
//

bool isPandP(string a){
  bool oddFound = false;
  int ascii[128] = {0};
  
  for(auto character : a){ // Using this for loop because I am not changing the valuea of string
    ascii[(int)character]++;
  }
  
  for(int i = 0; i < 128; i++){ //go through ascii array and check if more that 1 element has an odd value
    
    if(ascii[i] %2 == 1 && oddFound) return false;
    
    if(ascii[i] %2 == 1 && !oddFound) oddFound = !oddFound;
  }
  
  return true;
}


int main(){
  
  string a;
  getline( cin , a );
  
  if (!isPandP(a)) { cout << "NO:("; return 0;}
    
  cout << "YES! :)" << endl;
  
  return 0;  
  
}
