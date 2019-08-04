//189A - Cut Ribbon

#include <stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
  int n,a,b,c,ans[4010];
  scanf("%d %d %d %d",&n,&a ,&b,&c);
  memset(ans, -1, sizeof(ans));
  ans[0]=0;
  for(int i=0;i<=n;i++){
    if(i >= a && ans[i-a]!=-1)ans[i] = ans[i-a]+1;
    if(i >= b && ans[i-b]!=-1) ans[i] = max(ans[i], ans[i-b]+1);
    if(i >= c && ans[i-c]!=-1) ans[i] = max(ans[i], ans[i-c]+1);
  }
  printf("%d\n",ans[n]);
  return 0;
}
