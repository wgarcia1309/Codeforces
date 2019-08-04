//1177 - Array Fill II

#include<iostream>
using namespace std;
int main(){
  int t,c=0,n[1000];
  cin>>t;
  for (int i = 0; i < 1000; i++) {
    cout<<"N["<<i<<"] = "<<c<<endl;
    c++;
    if(c==t)c=0;
  }
  return 0;
}
