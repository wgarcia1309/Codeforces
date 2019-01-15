//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1117
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b;
        cin>>a;
        while(a<0 || a>10){
            cout<<"nota invalida"<<endl;
            cin>>a;
        }
        cin>>b;
        while(b<0 || b>10){
            cout<<"nota invalida"<<endl;
            cin>>b;
        }
        cout<<"media = "<<setprecision(2)<<fixed<<(a+b)/2<<endl;
    return 0;
}
