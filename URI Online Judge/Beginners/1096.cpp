//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1096
#include<iostream>
using namespace std;
int main(){
int a;
for (int i = 1; i <= 9; i+=2) {
  a=7;
  for (int  j = 1; j <= 3; j++) {
      cout <<"I="<<i<<" J="<<a << endl;
      a--;
  }
}
    return 0;
}
