//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1099
#include<iostream>
using namespace std;
int main(){
  int  n,x,y,t;
  cin>>n;
  for (int  i = 0; i <n; i++) {
      cin>>x;
      cin>>y;
      if (x>y) {
        t=x;
        x=y;
        y=t;
      }
      t=0;
      for (int j =x+1 ; j < y; j++) {
            if (j%2!=0)
                t+=j;
      }
      cout<<t<<"\n";
}
return 0;
}
