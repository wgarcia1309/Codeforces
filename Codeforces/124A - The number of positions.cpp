//124A - The number of positions

#include<iostream>
using namespace std;
int main (){
int n,a,b;
cin>>n;
cin>>a;
cin>>b;
if((n-a)<=(b+1)){
cout<<n-a;
}else{
cout<<b+1;
}
return 0;
}
