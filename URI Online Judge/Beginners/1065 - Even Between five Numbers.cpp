//1065 - Even Between five Numbers

#include<iostream>
using namespace std;
int main (){
    int p=0;
    for(int i=1;i<6;i++){
            int a;
            cin>>a;
            if(a%2==0)
                p++;
           }
cout<<p<<" valores pares"<<endl;
}
