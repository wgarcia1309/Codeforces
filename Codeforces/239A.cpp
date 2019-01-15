//A. Two Bags of Potatoes
//http://codeforces.com/problemset/problem/239/A
#include <stdio.h>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main() {
  int y,k,n;
  int x=0;
  cin>>y>>k>>n;
  bool r=false;
  x=k;
  while(x<=y){
    x+=k;
  }
  while(x<=n){
    if(x%k==0){
      if(!r){
        printf("%d",x-y);
        r=true;
      }else printf(" %d",x-y);
    }
    x+=k;
  }
  if(!r)printf("-1");
  printf("\n");
  return 0;
}
