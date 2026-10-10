#include <stdio.h>


int main(void) {
    char s[99];
    printf("Input s:");
    scanf("%99s", s);
    char ans[99];
    char c;
    printf("Input c:");
    scanf(" %c", &c);
    int index = 0;
    for(int i = 0; i < 99; i++){
        if(!s[i]){
            break;
        }

        if(s[i] ==c){
            continue;
        }
        else{
            ans[index ++] = s[i];
        }
    }

    printf("%s\n", ans);
}