#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    int d[5] = {41, 23, 8, 15, 33};

    int index = 999;

    int c;
    numin(c);
    rep(i, 5){
        if(d[i] == c){
            index = i;
            break;
        }
    }

    numout(index);
}