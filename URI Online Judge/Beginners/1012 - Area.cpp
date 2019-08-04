//1012 - Area

#include<iomanip>
#include<iostream>
using namespace std;
int main(){
double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"TRIANGULO: "<<setprecision(3)<<fixed<<a*c/2<<"\n";
    cout<<"CIRCULO: "<<setprecision(3)<<fixed<<c*c*3.14159<<"\n";
    cout<<"TRAPEZIO: "<<setprecision(3)<<fixed<<(a+b)*c/2<<"\n";
    cout<<"QUADRADO: "<<setprecision(3)<<fixed<<b*b<<"\n";
    cout<<"RETANGULO: "<<setprecision(3)<<fixed<<a*b<<"\n";
    return 0;
}
