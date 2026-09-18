#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define stout(a) printf("%s\n", a)
#define rep(i, n) for(int i = 0;i<n;i++)
int main(void) {
    for(int i = 1; i <= 30; i++){
        if(i % 3 == 0 && i % 5 == 0){
            stout("FizzBuzz");
        }
        else if(i % 3 == 0){
            stout("Fizz");
        }
        else if(i % 5 == 0){
            stout("Buzz");
        }
        else{
            numout(i);
        }
    }
}