//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1985
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int n;
  double t=0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    int p;
    double q;
    cin>>p;
    cin>>q;
    switch (p) {
      case 1001:
          t+=1.50*q;
      break;
      case 1002:
          t+=2.50*q;
      break;
      case 1003:
          t+=3.50*q;
      break;
      case 1004:
          t+=4.50*q;
      break;
      case 1005:
          t+=5.50*q;
      break;
    }
  }
  cout<<setprecision(2)<<fixed<<t<<endl;
  return 0;
}
