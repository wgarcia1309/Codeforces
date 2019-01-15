//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1043
#include<iostream>
#include<iomanip>
using namespace std;
int main (){
double a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a+b>c && b+c>a && a+c>b){
 cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
}else{
cout<<"Area = "<<fixed<<setprecision(1)<<(a+b)*c/2<<endl;
}
return 0;
}
