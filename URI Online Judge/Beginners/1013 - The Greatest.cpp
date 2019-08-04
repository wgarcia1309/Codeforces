//1013 - The Greatest

#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c;
    cin>>a;
    cin>>b;
    a=(a+b+abs(a-b))/2;
    cin>>b;
    a=(a+b+abs(a-b))/2;
    cout<<a<<" eh o maior\n";
    return 0;
}
