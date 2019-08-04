//1070 - Six Odd Numbers

#include<iostream>
using namespace std;
int main (){
int a;
cin>>a;
if(a%2==0)
    a+=1;
for(int i=a;i<a+12;i+=2){
    cout<<i<<endl;
}
return 0;
}
