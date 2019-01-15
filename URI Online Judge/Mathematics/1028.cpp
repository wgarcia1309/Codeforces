//https://www.urionlinejudge.com.br/judge/en/problems/view/1028
#include <iostream>
using namespace std;
int gcd(int a,int b){
  if(b==0)return a;
  return gcd(b,a%b);
}
int main(){
  int n;
  cin>>n;
  while(n>0){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<"\n";
    n--;
  }
  return 0;
}
