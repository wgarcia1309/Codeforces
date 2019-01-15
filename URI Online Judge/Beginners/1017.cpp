//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1017
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<setprecision(3)<<fixed<<a*b/12.0<<endl;
    return 0;
}
