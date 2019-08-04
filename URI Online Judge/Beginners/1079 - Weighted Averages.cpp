//1079 - Weighted Averages

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
      double n1,n2,n3;
      cin>>n1;
      cin>>n2;
      cin>>n3;
      cout<<setprecision(1)<<fixed<<(n1*0.2+n2*0.3+n3*0.5)<<"\n";
    }
    return 0;
}
