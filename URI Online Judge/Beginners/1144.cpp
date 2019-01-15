//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1144
#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  int n,t;
  cin>>n;
  for (int i = 1; i <=n; i++) {
      t=0;
      for (int j = 1; j <=2; j++) {
          cout<<setprecision(0)<<fixed<<i<<" "<<setprecision(0)<<fixed<<pow(i,2)+t<<" "<<setprecision(0)<<fixed<<pow(i,3)+t<<"\n";
          t++;
      }
  }
return 0;
}
