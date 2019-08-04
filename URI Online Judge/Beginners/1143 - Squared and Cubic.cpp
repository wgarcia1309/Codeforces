//1143 - Squared and Cubic

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
  int n;
  cin>>n;
  for (int i = 1; i <=n; i++) {
    cout<<setprecision(0)<<fixed<<i<<" "<<setprecision(0)<<fixed<<pow(i,2)<<" "<<setprecision(0)<<fixed<<pow(i,3)<<"\n";
  }
return 0;
}
