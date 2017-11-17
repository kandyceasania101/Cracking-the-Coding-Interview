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
