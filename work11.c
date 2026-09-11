#include <stdio.h>
int main(void) {
 int s = 0;
 for (int i = 0; i < 11; i++) {
 printf("%d \n", i);
 s = s + i;
 }
 printf("Goukei = ");
 printf("%d", s);
 return 0;
}
