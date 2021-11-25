#include <stdio.h>

int v[10000000] = {0};

int main()
{
    int m;
    scanf("%d", &m);

    int ans = 0;
    for(int i=2; i<m; i++) {
        if(v[i]==0) {printf("%d  ", i); ans++;}
        for(int k=i+i; k<m; k+=i) {
            v[k] = 1;
        }
    }


printf("ANS:%d\n", ans);








}
