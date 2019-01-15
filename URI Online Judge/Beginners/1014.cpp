//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1014
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    double b;
    cin>>a;
    cin>>b;
    cout<<setprecision(3)<<fixed<<a/b<<" km/l\n";
    return 0;
}
