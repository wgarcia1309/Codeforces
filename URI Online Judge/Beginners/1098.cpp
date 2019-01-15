//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1098
#include<iostream>
using namespace std;
int main(){
  double  a=0;
  for (int  i = 0; i <= 20; i+=2) {
      for (int  j = 1; j <= 3; j++) {
      cout <<"I="<<a<<" J="<<j+a << endl;
      }
  a=a+0.2;
  }
return 0;
}
