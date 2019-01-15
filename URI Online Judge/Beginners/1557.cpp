//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1557
#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdint.h>
using namespace std;
int main (){
  int n[100][100],x,u,a,tamano(int l);
  cin>>x;
  while(x!=0){
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=(x-1);j++){
            n[i][j]=pow(2,j+i);
        }
    }
    u=n[x-1][x-1];
    u=tamano(u);
    for(int i=0;i<=x-1;i++){
        for(int j=0;j<=(x-1);j++){
            if(j==0){
                if(x<=1){
                cout<<n[i][j]<<endl;
                }else{
                a=n[i][j];
                a=tamano(a);
                for(int k=a;k<u;k++)
                cout<<" ";
                cout<<n[i][j];
                a=n[i][j+1];
                a=tamano(a);
                for(int k=a;k<=u;k++)
                cout<<" ";
            }
            }else if(j!=x-1){
            a=n[i][j+1];
            a=tamano(a);
            cout<<n[i][j];
                for(int k=a;k<=u;k++){
                cout<<" ";
                }
            }else{
            cout<<n[i][j]<<endl;
            }
    }
}
cout<<endl;
  cin>>x;
  }
return 0;
}
int tamano(int a){
 int c=1;
 while ( a>9) {
c++;
a= a/10;
}
return c;
}
