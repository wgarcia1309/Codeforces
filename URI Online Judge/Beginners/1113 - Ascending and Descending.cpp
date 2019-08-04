//1113 - Ascending and Descending

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
