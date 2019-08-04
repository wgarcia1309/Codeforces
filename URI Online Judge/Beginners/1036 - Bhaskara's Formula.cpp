//1036 - Bhaskara's Formula

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    double a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(b*b>=4*a*c && a!=0)cout<<"R1 = "<<setprecision(5)<<fixed<<(-b+(sqrt(pow(b,2)-4*a*c)))/(2*a)<<"\nR2 = "<<setprecision(5)<<fixed<<(-b-sqrt(pow(b,2)-4*a*c))/(2*a)<<"\n";
    else cout<<"Impossivel calcular\n";
return 0;
}
