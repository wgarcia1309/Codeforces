//219A - k-String

#include <stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main() {
  int letras[30];
  for(int i=0;i<31;i++)letras[i]=0;
  int k;
  string text,res="";
  scanf("%d\n",&k);
  getline(cin,text);
  int siz=text.size();
  for(int i=0;i<siz;i++){
    letras[(int)(text[i]-'a')]++;
  }
  bool r=true;
  for(int i=0;i<26;i++){
    if(letras[i]%k!=0){
      r=false;
      break;
    }
  }
  if(!r)printf("-1\n");
  else{
    for(int i=0;i<26;i++){
      int num=letras[i]/k;
      for(int j=0;j<num;j++){
        res+=('a'+i);
      }
    }
    for(int i = 0; i <k; i++) cout << res;
    printf("\n");
  }
  return 0;
}
