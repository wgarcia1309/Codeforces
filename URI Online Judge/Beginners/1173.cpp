//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1173
#include<iostream>
using namespace std;
int main(){
  int v[10];
  cin>>v[0];
  cout<<"N["<<0<<"] = "<<v[0]<<endl;
  for (int i = 1; i <10 ;i++) {
    v[i]=v[i-1]*2;
    cout<<"N["<<i<<"] = "<<v[i]<<endl;
  }
  return 0;
}
