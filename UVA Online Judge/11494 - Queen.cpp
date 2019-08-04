//11494 - Queen

#include <iostream>
  using namespace std;
  int main(){
    while(true){
      int x1,y1,x2,y2;
      bool r=false;
      cin>>x1>>y1>>x2>>y2;
      if(x1==0 && x2==0 && y1==0 && y2==0)break;
      if(x1==x2 && y1==y2){
        cout<<"0\n";
        r=true;
      }else if(x1==x2 || y1==y2){
        cout<<"1\n";
        r=true;
      }else{
        for(int i = 1;i <= 7; i++) {
          if( ((x1+i)==x2 && (y1+i)==y2) || ((x1-i)==x2 && (y1+i)==y2) || ((x1+i)==x2 && (y1-i)==y2)  || ((x1-i)==x2 && (y1-i)==y2)  ){
            cout<<"1\n";
            r=true;
            break;
          }
        }
      }
      if(!r)cout<<"2\n";
    }
    return 0;
  }
