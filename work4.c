#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
  int x;
  numin(x);
  int ans = 0;
  x--;
  while(x >= 2){
    if(x % 2 == 0){
        ans += x;
    }
    x--;
  }
  numout(ans);
}