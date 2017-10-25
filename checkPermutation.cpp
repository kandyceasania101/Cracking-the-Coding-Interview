//
//
//Objective: Given two strings, write a method to decide if one is a permuation of the other.
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

bool checkPermutation(string a, string b){

  if(a.size() != b.size()) return false; //check lengths of both strings

  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());
  
  if ( a.compare(b) != 0 ) return false;
  
  return true;
  
}


int main(){
  
  string a, b;
  getline( cin , a );
  getline( cin , b );
  
  if (!checkPermutation(a, b)) { cout << "NO:("; return 0;}
    
  cout << "YES! :)" << endl;
  
  return 0;  
  
}
