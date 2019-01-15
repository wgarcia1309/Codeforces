//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1009
#include<iomanip>
#include<iostream>
using namespace std;
int main(){
double a,b;
string name;
    cin>>name;
    cin>>a;
    cin>>b;
    cout<<"TOTAL = R$ "<<setprecision(2)<<fixed<<a+b*0.15<<"\n";
    return 0;
}
