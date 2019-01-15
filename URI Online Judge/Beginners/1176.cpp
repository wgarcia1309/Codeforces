//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1176
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  int t;
  cin>>t;
  for (int i = 0; i < t; i++) {
    int n;
    cin>>n;
    double r=n;
    if (n>1) {
      double i=1,f=0;
      for (int j = 0; j < n-1; j++) {
        r=i+f;
        f=i;
        i=r;
      }
    }
    cout<<"Fib("<<n<<") = "<<setprecision(0)<<fixed<< r<<endl;
  }
  return 0;
}
