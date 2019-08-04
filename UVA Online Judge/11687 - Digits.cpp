//11687 - Digits

#include<iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int digits(string s,int lvl){
    
    stringstream stream;
    stream<<s.size();
    if(s==stream.str())return lvl;
    return digits(stream.str(),lvl+1);
}

int main(){
    string s;
    getline(cin,s);
    while(s!="END"){
        bool number=true;
        cout<<digits(s,1)<<"\n";
        getline(cin,s);
    }
    return 0;
}