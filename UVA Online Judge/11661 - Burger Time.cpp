//11661 - Burger Time?


#include<cmath>
#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int l;
  cin>>l;
  char chr[2000010];
  while(l){
    scanf("%s\n",chr);
    int df=2000000,R=-1,D=-1;
    for (int i = 0; i < l; i++){
      if(chr[i]=='Z'){
        df=0;
        break;
      }else {
        if(chr[i]=='R'){
          R=i;
          if(R!=-1 && D!=-1){
            int rst=abs(R-D);
            if(df>rst)df=rst;
          }
        }else if(chr[i]=='D'){
            D=i;
            if(R!=-1 && D!=-1){
              int rst=abs(R-D);
              if(df>rst)df=rst;
            }
        }
      }
    }
    cout<<df<<'\n';
    cin>>l;
  }
  return 0;
  }
