//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1155
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double s=0;
        for( int i=1;i<=100;i++){
            s+=1.0/i;
        }
        cout<<setprecision(2)<<fixed<<s<<endl;
    return 0;
}
