//1101 - Sequence of Numbers and Sum

#include<iostream>
using namespace std;
int main(){
  int m,n,t;
  cin>>n;
  cin>>m;
  while (m>0 && n>0) {
    if (n>m) {
      t=n;
      n=m;
      m=t;
    }
    t=0;
    for (int j =n ; j <=m; j++) {
              cout<<j<<" ";
              t+=j;
    }
    cout<<"Sum="<<t<<endl;
    cin>>m;
    cin>>n;
  }
return 0;
}
