//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1005
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double a,b;
cin>>a;
cin>>b;
cout<<"MEDIA = "<<setprecision(5)<<fixed<<(a*3.5+b*7.5)/11<<"\n";
return 0;
}
