//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1010
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
int a,b;
double c,r=0;
for(int i=1;i<=2;i++){
    cin>>a;
    cin>>b;
    cin>>c;
    r=r+b*c;
}
    cout<<"VALOR A PAGAR: R$ "<<setprecision(2)<<fixed<<r<<"\n";
    return 0;
}
