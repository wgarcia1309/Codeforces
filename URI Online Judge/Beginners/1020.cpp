//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1020
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    cin>>a;
    cout<<a/365<<" ano(s)\n"<<a%365/30<<" mes(es)\n"<<a%365%30/1<<" dia(s)\n";
    return 0;
}
