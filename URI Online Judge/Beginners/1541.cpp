//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1541
#include<iostream>
using namespace std;
int main(){
  while (true) {
    int a,b,c;
    cin>>a;
    if(a==0)break;
    cin>>b;
    cin>>c;
       cout << (int)(sqrt a * b * (100.0/c)); << endl;
  }
  return 0;
}
