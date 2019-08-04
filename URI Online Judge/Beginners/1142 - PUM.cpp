//1142 - PUM

#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int j = 1; j <=a*4; j++) {
              if(j%4==0)
                cout<<"PUM"<<"\n";
              else
                cout<<j<<" ";
}
    return 0;
}
