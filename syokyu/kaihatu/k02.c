#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)

int h = 1000;

const char t1[]= "AZUKEIRE:", t2[] = "HIKIDASHI:", t3[] = "ZANDAKA:", t0[] = "TORIHIKISYURYO";

int main(void) {
    int flag = 1;
    while(flag == 1){
        int t;
        scanf("%d", &t);

        switch(t){
            case 1:
                printf("%s\n", t1);
                int a;
                numin(a);
                h += a;
                break;
            case 2:
                printf("%s\n", t2);
                int b;
                numin(b);
                h -= b;
                break;
            case 3:
                printf("%s\n", t3);
                printf("%d\n", h);
                break;
            default:
                flag = 0;
                break;
        }
    }
}