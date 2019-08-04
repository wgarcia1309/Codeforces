//1156 - S Sequence II

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double s=0;
        for( int i=1;i<20;i++){
            s+=(((i-1)*2)+1)/pow(2,i-1);
        }
        cout<<setprecision(2)<<fixed<<s<<endl;
    return 0;
}
