//10324 - Zeros and Ones

#include <stdio.h>
#include<algorithm>
using namespace std;
int main() {
  int c=1;
  int l;
  char chr[1000010];
  while(scanf("%s %d",chr,&l)==2){
    int a,b;
    bool r;
    printf("Case %d:\n",c++);
    for (int i = 0; i <l; i++){
      scanf("%d %d",&a,&b);
      if(a > b) swap(a, b);
      r=true;
        for (int j =a; j<b ; j++){
            if(chr[j]!=chr[j+1]){
                r=false;
                break;
            }
        }
        printf("%s\n",(r)?"Yes":"No");
    }
  }
  return 0;

  }
