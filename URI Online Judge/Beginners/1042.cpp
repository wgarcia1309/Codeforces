//Problem:
//https://www.urionlinejudge.com.br/judge/es/problems/view/1042#include<iostream>
using namespace std;
int main (){
    int v[3],me=0,ma=0,med=0;
    for(int i=0;i<3;i++)
        cin>>v[i];
    for(int i=0;i<3;i++){
        if(v[i]<v[me]){
            med=me;
            me=i;
        }else if(v[i]>v[ma]){
            med=ma;
            ma=i;
        }else{
        med=i;
        }
    }
    cout<<v[me]<<endl<<v[med]<<endl<<v[ma]<<endl<<endl;
    for(int i=0;i<3;i++){
        cout<<v[i]<<endl;
    }
return 0;
}
