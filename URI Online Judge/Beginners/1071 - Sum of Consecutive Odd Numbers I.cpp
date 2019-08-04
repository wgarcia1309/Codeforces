//1071 - Sum of Consecutive Odd Numbers I

#include<iostream>
using namespace std;
int main (){
int x,y,t;
cin>>x>>y;
if(x>y){
    t=x;
    x=y;
    y=t;
}
t=0;
for(int i=x+1;i<y;i++){
    if(i%2!=0){
     t+=i;
    }
}
cout<<t<<endl;
return 0;
}
