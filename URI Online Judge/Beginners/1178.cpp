//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1178
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  double n[100];
  cin>>n[0];
  cout<<"N["<<0<<"] = "<<setprecision(4)<<fixed<<n[0]<<endl;
  for (int i = 1; i <100; i++){
    n[i]=n[i-1]/2.0;
    cout<<"N["<<i<<"] = "<<setprecision(4)<<fixed<<n[i]<<endl;
  }
  return 0;
}
