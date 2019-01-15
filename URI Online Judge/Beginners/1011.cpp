//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1011
#include<iomanip>
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int a;
    cin>>a;
    cout<<"VOLUME = "<<setprecision(3)<<fixed<<3.14159*4/3*pow(a,3)<<"\n";
    return 0;
}
