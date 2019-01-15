//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1073
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main (){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(i%2==0){
        cout<<i<<"^2 = "<<setprecision(0)<<fixed<< pow(i,2)<<endl;
    }
}
return 0;
}
