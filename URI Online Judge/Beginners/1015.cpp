//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1015
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<setprecision(4)<<fixed<<sqrt(pow((c-a),2)+pow((d-b),2))<<endl;
 return 0;
}
