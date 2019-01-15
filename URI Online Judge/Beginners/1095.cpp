//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1095
#include<iostream>
using namespace std;
int main(){
int a=1;
for (int i = 60; i >= 0; i-=5) {
      cout <<"I="<<a<<" J="<<i << endl;
      a+=3;
}
    return 0;
}
