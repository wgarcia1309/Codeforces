//11586 - Train Tracks

#include<iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int j=0;j<t;j++){
        string input;
        getline(cin,input);
        int m=0,f=0;
        for(i=0;i<input.size();i++){
            switch(input.at(i)){
                case 'F':
                    f++;
                    break;
                case 'M':
                    m++;
                    break;
            }
        }
        (m==f && m>1)?cout<<"LOOP\n":cout<<"NO LOOP\n";
    }
    return 0;
}
