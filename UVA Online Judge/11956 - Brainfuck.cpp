//11956 - Brainfuck

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
        int memory[100]={0},index=0,i=0;
        bool x=false;
        for(i=0;i<input.size();i++){
            switch(input.at(i)){
                case '>':
                    if(index+1>99){
                        index=0;
                    }else{
                        index++;   
                    }
                break;
                case '<':
                    if(index-1<0){
                        index=99;
                    }else{
                        index--;   
                    }
                break;
                case '+':
                    if(memory[index]+1>255)memory[index]=0;
                    else memory[index]++;
                break;
                case '-':
                    if(memory[index]-1<0)memory[index]=255;
                    else memory[index]--;
                    
                break;
                case '.':
                break;
            }
        }
        cout<<"Case "<<dec<<(j+1)<<": ";
        
        for(i=0;i<99;i++){
            (memory[i]<16)?cout<<"0"<<uppercase <<hex<<memory[i]<<" ":cout<<uppercase <<hex<<memory[i]<<" ";
        }
        (memory[i]<16)?cout<<"0"<<uppercase <<hex<<memory[i]<<"\n":cout<<uppercase <<hex<<memory[i]<<"\n";
        
    }
    return 0;
}
