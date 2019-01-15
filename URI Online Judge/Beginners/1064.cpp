//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1064
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
int c=0;
double p=0,b[6];
for(int i=0;i<=5;i++){
    cin>>b[i];
    if(b[i]>0){
        c++;
        p+=b[i];
    }
}
p=p/c;
cout<<c<<" valores positivos\n"<<setprecision(1)<<fixed<<p<<endl;
return 0;
}
