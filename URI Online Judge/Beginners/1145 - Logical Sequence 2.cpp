//1145 - Logical Sequence 2

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,t=0;
    double c=0;
    cin>>n;
    do{
    t+=n;
    c++;
    cin>>n;
    }while(n>=0);
    cout<<setprecision(2)<<fixed<<t/c<<endl;
    return 0;
}
