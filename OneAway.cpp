/*main.cpp*/

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using namespace std;

//isOneAway(string, string) helper
bool iOAHelper_Replace(string a, string b){
    
    bool changeFound = false;
    int i;
    while(i < a.size()){
    
        if(a[i] != b[i] && changeFound) return false;
        if(a[i] != b[i] && !changeFound){ changeFound = !changeFound; }
        i++;
        
    }
    return true;
}

//isOneAway(string, string) helper
bool iOAHelper_Insert(string a, string b){
    
    bool changeFound = false;
    int charA = 0, charB = 0;
    while(charA < a.size() && charB < b.size()){
    
        if(a[charA] != b[charB] && changeFound) return false;
        if(a[charA] != b[charB] && !changeFound){
            charA++;
        }
        else{
            charA++;
            charB++;
        }
    }  
    return true;
}

bool isOneAway(string a, string b){

    if( a.compare(b) == 0 ){ return true; }

    if( a.size() == b.size() ) { return iOAHelper_Replace( a, b ); }
    if( static_cast<int>(a.size() - b.size()) == 1) { return iOAHelper_Insert( a, b ); }
    if( static_cast<int>(a.size() - b.size()) == -1) { return iOAHelper_Insert( b, a ); }

    return false;
}

int main(){
    string a, b;
    
    getline( cin , a);
    getline( cin , b);
   
    if (!isOneAway(a,b)) { cout << "NO:("; return 0;}
    
    cout << "YES! :)" << endl;
    
    return 0;
    
}
