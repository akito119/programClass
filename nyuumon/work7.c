#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    int d[] = {41, 23, 8, 15, 33, 45, 0};

    int pos = 0;
    int ans = 0;
    while(d[pos] != 0){
        numout(d[pos]);
        ans += d[pos];
        pos ++;
    }
    numout(ans);
}