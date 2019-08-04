//233B - Non-square Equation

#include <iostream>
#include <math.h>
using namespace std;
long long S(long long x){
  long long sol=0;
  while(x/10!=0 || x%10!=0) {
    sol+=x%10;
    x=x/10;
  }
  return sol;
}

long long f(long long x,long long n){
  return x*x+S(x)*x-n;
}

int main() {

  long long n,c,sol,val;
  cin>>n;
  long long  i=1;
  while(i<=81){
    sol=(-i+sqrt(i*i+4*n))/2;
    val=f(sol,n);
    if( val==0 ){
      cout<<sol<<endl;
      break;
    }
    i++;
  }
  if(val!=0)cout<<-1<<endl;
  return 0;
}
