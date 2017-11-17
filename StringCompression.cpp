//
//
//Objective: Implement a method to perform basic string compression using the counts of repeated characters.
//For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become
//smaller than the original string, your method should return the original string. You can assume the
//string has only uppercase and lowercase letter (a-z).
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

string compression(string str){
  string compressed;
  int count = 1, i = 0;
  while (i < str.size()){
    if (str[i] != str[i-1]){
      if (i > 0){
        compressed.append(to_string(count));
        count = 1;
      }
      compressed.append(1, str[i]);
    }
    else{ count++; }
    i++;
  }
  
  compressed.append(to_string(count));
  return (compressed.size() < str.size() ? compressed : str);
}

int main(){
    string a;
    getline(cin , a);
    cout << compression(a) << endl;
    return 0;   
}

