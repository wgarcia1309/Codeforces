//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1133
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    if (b<a) {
      int t=a;
      a=b;
      b=t;
    }
    for (int i = a+1; i <b; i++) {
      if (i%5==2 || i%5==3)
        cout<<i<<endl;
    }
    return 0;
}
