#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
int main(void) {
 int a;
 printf("Tokuten? ");
 numin(a);
 if( a > 70){
    printf("Seiseki A\n");
 }
 else if(a > 50){
    printf("Seiseki B\n");
 }
 else{
    printf("Seiseki C\n");
 }
}