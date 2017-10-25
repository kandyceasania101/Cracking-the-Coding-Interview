//
//
//Objective: Write a method to replace all spaces in a string with '%20'.
//You may assume that the string has sufficient space at the end to hold the
//additional characters, and that you are given the "true" length of the string.
//
//Language: C++
//
//Kandyce Burks
//
//

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

void URLify(string &a){
  
  for(auto i = a.find(' '); i != string::npos; i = a.find(' ')){
  
    a.replace(i, 1, "%20");
    
  } 
}


int main(){
  
  string a;
  
  getline( cin , a );
  
  URLify(a);
  
  cout << a << endl;
  
  return 0;  
  
}
