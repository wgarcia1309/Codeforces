//1118 - Several Scores with Validation

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b;
     do{
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
            do{
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            cin>>b;
            }while(b!=1 && b!=2);
        }while(b!=2);
    return 0;
}
