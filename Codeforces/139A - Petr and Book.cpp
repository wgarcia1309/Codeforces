//139A - Petr and Book

#include<iostream>
using namespace std;
int main (){
int n,v[7],i=1,sw;
cin>>n;
cin>>v[0];
cin>>v[1];
cin>>v[2];
cin>>v[3];
cin>>v[4];
cin>>v[5];
cin>>v[6];
while(n>0){
    sw=0;
    n=n-v[i-1];
    i=i+1;
    if(i==8){
        i=1;
        sw=1;
    }
}
if(i==1 && sw==1){
cout<<7;
}else{
cout<<i-1;
}
return 0;
}
