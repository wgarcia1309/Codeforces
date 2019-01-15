//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1132
#include<iostream>
using namespace std;
int main(){
    int a,b,t;
    cin>>a;
    cin>>b;
    if (b<a) {
      t=a;
      a=b;
      b=t;
    }
    t=0;
    for (int i = a; i <= b; i++) {
      if (i%13!=0)
        t+=i;
    }
    cout<<t<<endl;
    return 0;
}
