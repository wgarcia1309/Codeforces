//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1172
#include<iostream>
using namespace std;
int main(){
  int v[10];
  for (int i = 0; i <10 ;i++) {
    cin>>v[i];
    if(v[i]<=0)v[i]=1;
    cout<<"X["<<i<<"] = "<<v[i]<<endl;
  }
  return 0;
}
