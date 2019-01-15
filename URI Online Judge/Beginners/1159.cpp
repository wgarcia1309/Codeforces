//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1159
#include<iostream>
using namespace std;
int main(){
    int x,t=0;
    double c=0;
    cin>>x;
    while(x!=0){
        if(x%2!=0)x++;
        int s=0;
        for( int i=x;i<x+10;i+=2){
            s+=i;
        }
        cout<<s<<endl;
        cin>>x;
    }
    return 0;
}
