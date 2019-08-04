//1072 - Interval 2

#include<iostream>
using namespace std;
int main (){
int n,in=0,ou=0;
cin>>n;
for(int i=1;i<=n;i++){
        int a;
        cin>>a;
    if(a>=10 && a<=20){
     in++;
    }else{
     ou++;
    }
}
cout<<in<<" in"<<endl;
cout<<ou<<" out"<<endl;
return 0;
}
