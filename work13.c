#include <stdio.h>

#define numout(a) printf("%d\n",a)
#define numin(a) scanf("%d", &a)
#define rep(i, n) for(int i = 0;i<n;i++)

const int bigNum = 100000;

int isp[100000];

void sieve()
{
    rep(i, bigNum){
        isp[i] = 1;
    }
    isp[0] = 0;
    isp[1] = 0;
    for (int i = 2; i * i <= bigNum; i++)
    {
        if (isp[i])
            for (int j = 2; i * j <= bigNum; j++)
                isp[i * j] = 0;
    }
}




int main(void) {
    sieve();

    int d[21];
    rep(i, 21){
        if(isp[i] == 1){
            d[i] = i;
        }
        else{
            d[i] = 0;
        }
    }

    rep(i,21){
        printf("%d", d[i]);
        printf("%s"," ");
    }
    printf("\n");
}