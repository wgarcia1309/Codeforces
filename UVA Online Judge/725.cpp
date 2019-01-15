//725 - Division
//https://uva.onlinejudge.org/external/7/725.pdf
#include<bits/stdc++.h>
using namespace std;
int main(){
        char ans[90][10];
        int arr[10]={1,2,3,4,6,0,5,7,8,9};
        int num1,num2;
        num1=num2=0;
        vector< vector <string> > matrix (90);
        do {
                num1=num2=0;
                for(int i=0;i<5;i++){
                    num1+=arr[i]*pow(10,4-i);
                    num2+=arr[i+5]*pow(10,4-i);
                }
                if(num1%num2==0){
                    string s1,s2;
                    if(num1<10000)s1="0"+to_string(num1);
                    else s1=to_string(num1);
                    if(num2<10000)s2="0"+to_string(num2);
                    else s2=to_string(num2);
                    matrix[num1/num2].push_back( s1+" / "+ s2+" = "+to_string(num1/num2));
                }
        } while (next_permutation(arr,arr+10) && !(num1==98760 && num2==12345));
    int n;
    scanf("%d",&n);
    int c=0;
    while(n!=0){
        int t=matrix[n].size();
        if(t==0)cout<<"There are no solutions for "<<n<<".\n";
        else {
            for (int i=0; i<t; i++)cout << matrix[n][i] << "\n";
        }
        scanf("%d",&n);
        if(n!=0)cout<<"\n";

    }
    return 0;
}
