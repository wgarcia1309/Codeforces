//A. String Task
//http://codeforces.com/problemset/problem/118/A
#include <stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
bool letter(char l){
  if(l=='A' || l=='a')return true;
  else if(l=='O' || l=='o')return true;
  else if(l=='Y' || l=='y')return true;
  else if(l=='E' || l=='e')return true;
  else if(l=='U' || l=='u')return true;
  else if(l=='I' || l=='i')return true;
  return false;
}
int main() {
  string text;
  getline(cin,text);
  int siz=text.size();
  int j=0;
  for(int i=0;i<siz;i++){
      if(text[i]<'a'){
        if(!letter(text[i]))printf(".%c",text[i]+32);
      }else{
        if(!letter(text[i]) )printf(".%c",text[i]);
      }
  }
  printf("\n");
  return 0;
}
