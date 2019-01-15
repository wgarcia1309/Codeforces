//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1097
#include<iostream>
using namespace std;
int main(){
int a=7;
for (int i = 1; i <= 9; i+=2) {
  for (int  j = 1; j <= 3; j++) {
      cout <<"I="<<i<<" J="<<a << endl;
      a--;
  }
  a+=5;
}
    return 0;
}
