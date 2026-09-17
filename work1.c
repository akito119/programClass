#include <stdio.h>

#define numout(a) printf("%d\n",a)
int main(void) {
 int a, b;
 scanf("%d", &a);
 scanf("%d", &b);
 if( b == 0){
    printf("%s\n", "fraudulent number");
    return 0;
 }
 numout(a + b);
 numout(a - b);
 numout(a * b);
 numout(a / b);

 return 0;
}