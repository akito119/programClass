#include <stdio.h>
int main(void) {
 int a;
 printf("Tokuten? ");
 scanf("%d", &a);
 if (a > 70) {
 printf("Goukaku");
 } else {
 printf("Fugoukaku");
 }
 return 0;
}