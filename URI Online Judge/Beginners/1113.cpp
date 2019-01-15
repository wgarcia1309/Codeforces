//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1113
#include<iostream>
using namespace std;
int main(){
  int m,n;
  cin>>n;
  cin>>m;
  while (m!=n) {
    if (n>m)
    cout<<"Decrescente"<<endl;
    else
    cout<<"Crescente"<<endl;
  cin>>n;
  cin>>m;
  }
return 0;
}
