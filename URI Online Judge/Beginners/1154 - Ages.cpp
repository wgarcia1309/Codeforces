//1154 - Ages

#include<iostream>
#include<iomanip>
using namespace std;
int main (){
    int n,s=0,c=0;
    double r;
    cin>>n;
    while(n>=0){
      s=s+n;
      c++;
      cin>>n;
    }
    r=s/(double)c;
    cout<<setprecision(2)<<fixed<<r<<endl;
return 0;
}
