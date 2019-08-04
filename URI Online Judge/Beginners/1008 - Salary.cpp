//1008 - Salary

#include<iomanip>
#include<iostream>
using namespace std;
int main(){
int a,b;
double c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"NUMBER = "<<a<<"\n";
    cout<<"SALARY = U$ "<<setprecision(2)<<fixed<<b*c<<"\n";
    return 0;
}
