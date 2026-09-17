#include <stdio.h>
#include </usr/include/stdlib.h>
#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define stout(a) printf("%s", a);
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
 int d[6] = {0, 0, 0, 0, 0, 0,};
 int s[5] = {0, 0, 0, 0, 0};
 for(int i = 0;i < 100; i ++){
    int result = rand() % 6;
    s[i % 5] = result;
    switch (result) {
        case 0 :
            d[0] ++;
            break;
        case 1 :
            d[1] ++;
            break;
        case 2 :
            d[2] ++;
            break;
        case 3 :
            d[3] ++;
            break;
        case 4 :
            d[4] ++;
            break;
        case 5 :
            d[5] ++;
            break;
    }   
    if(i % 4 == 0){
        rep(i, 5){
            printf("%d", s[i] + 1);
            stout(" ");
        }
        printf("\n");
    }
 }
 rep(i, 5){
            printf("%d", d[i]);
            stout(" ");
        }
        printf("\n");
}