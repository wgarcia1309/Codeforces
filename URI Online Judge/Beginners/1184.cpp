//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1184
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
  int l;
  double m[12][12];
  string op;
  cin>>op;
  double r=0;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j <12; j++){
        cin>>m[i][j];
        if(j<i)r+=m[i][j];
    }
 }
 if(op.compare("S")==0)cout<<setprecision(1)<<fixed<<r<<endl;
 else cout<<setprecision(1)<<fixed<<r/66<<endl;
  return 0;
}
