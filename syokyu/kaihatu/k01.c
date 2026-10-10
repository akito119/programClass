#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    double a, b;
    scanf("%lf%lf", &a, &b);
    int y = 0, s = 0;
    while(a > 0){
        printf("%d%s%f%s%f%s%f%s%f\n", ++y," ", a, " ", a * 0.03, " ", a*1.03 < b?b:a, " ", a * 1.03 > b?b:0);
        a *= 1.03;
        a -= b;
    }
}