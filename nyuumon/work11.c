#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    int d[5] = {41, 23, 8, 15, 33};


    for(int i = 0;i < 5; i++){
        for(int j = i; j < 5;j++){
            int tmp = d[j];
            if(tmp < d[i]){
                d[j] = d[i];
                d[i] = tmp;
            }
        }
    }

    rep(i,5){
        numout(d[i]);
    }
}