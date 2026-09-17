#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    int d[5] = {41, 23, 8, 15, 33};
    rep(i,5){
        int tmp = d[i];
        if(tmp < d[0]){
            d[i] = d[0];
            d[0] = tmp;  
        }
    }

    rep(i,5){
        numout(d[i]);
    }
}