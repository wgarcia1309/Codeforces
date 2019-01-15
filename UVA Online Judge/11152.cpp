//11152 - Colourful Flowers
//https://uva.onlinejudge.org/external/111/11152.pdf
#include<iostream>
#include<iomanip>
#include<math.h>
#define PI 3.14159265359
using namespace std;
int main(){
    while(true){
    double a,b,c;
    cin>>a>>b>>c;
    if(cin.fail())break;
    double smp=(a+b+c)/2.0;//semiperimetro
    double atr=sqrt(smp*(smp-a)*(smp-b)*(smp-c));//heron areaT
    double routcircle=a*b*c/(4*atr);//radio outcircle
    double incircle=atr/smp;//radio incircle
    cout<<setprecision(4)<<fixed<<PI*routcircle*routcircle-atr<<" ";
    cout<<setprecision(4)<<fixed<<(atr-incircle*incircle*PI)<<" ";
    cout<<setprecision(4)<<fixed<<(incircle*incircle*PI)<<"\n";
    }
    return 0;
}
