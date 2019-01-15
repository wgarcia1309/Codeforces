//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1002
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double a;
    cin>>a;
    cout<<"A="<<setprecision(4)<<fixed<<((a*a)*3.14159)<<"\n";
    return 0;
}
