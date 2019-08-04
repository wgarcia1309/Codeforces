//1158 - Sum of Consecutive Odd Numbers III

#include<iostream>
using namespace std;
int main(){
    int n,t=0;
    double c=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y,s=0;
        cin>>x;
        cin>>y;
        y=x+(y*2);
        if(x%2==0)x++;
        for(int j=x;j<y;j+=2){
            s+=j;
        }
        cout<<s<<endl;
    }
    return 0;
}
