//11461 - Square Numbers
//https://uva.onlinejudge.org/external/114/11461.pdf
#include<cmath>
#include <iostream>
using namespace std;
bool solve(int r){
  double rs=sqrt(r);
  return(int(rs)-rs==0);
}
int main() {
    int a,b;
    cin>>a>>b;
    do{
        int c=0;
       for(int i=a;i<=b;i++)if(solve(i))c++;
        cout<<c<<"\n";
        cin>>a>>b;
    }while(a && b );
    return 0;
}
