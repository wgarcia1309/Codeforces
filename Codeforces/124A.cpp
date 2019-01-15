//A. The number of positions
//http://codeforces.com/problemset/problem/124/A
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
