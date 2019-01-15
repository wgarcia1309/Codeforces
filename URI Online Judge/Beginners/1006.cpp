//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1006
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double a,b,c;
cin>>a;
cin>>b;
cin>>c;
cout<<"MEDIA = "<<setprecision(1)<<fixed<<a*0.2+b*0.3+c*0.5<<"\n";
return 0;
}
