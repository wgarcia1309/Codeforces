//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1051
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
double s;
cin>>s;
if(s<=2000)
    cout<<"Isento"<<endl;
else if(s>2000 && s<=3000)
    cout<<"R$ "<<setprecision(2)<<fixed<<(s-2000)*0.08<<endl;
else if(s>3000 && s<=4500)
    cout<<"R$ "<<setprecision(2)<<fixed<<80+(s-3000)*0.18<<endl;
else
cout<<"R$ "<<setprecision(2)<<fixed<<80+270+(s-4500)*0.28<<endl;
}
