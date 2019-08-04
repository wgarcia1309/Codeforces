#include <iostream>

using namespace std;
int main()
{
    int a,c;
    cin>>a>>c;
    while(a!=0 && c!=0){
        int x,turnon=0,bf=0;
        cin>>x;
        turnon=a-x;
        bf=x;
        for (int i=1;i<c;i++) {
           int x;
           cin>>x;
           if(x<bf){
               turnon+=bf-x;
           }
           bf=x;
           
        }
        cout<<turnon<<"\n";
        cin>>a>>c;
    }
}