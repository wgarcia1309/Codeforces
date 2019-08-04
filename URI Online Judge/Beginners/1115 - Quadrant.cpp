//1115 - Quadrant

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    while (a!=0 && b!=0) {
      if(a>0){
        if (b>0)
          cout<<"primeiro"<<endl;
        else
          cout<<"quarto"<<endl;
      }else{
        if (b>0)
          cout<<"segundo"<<endl;
        else
          cout<<"terceiro"<<endl;
      }
    cin>>a;
    cin>>b;
    }
    return 0;
}
