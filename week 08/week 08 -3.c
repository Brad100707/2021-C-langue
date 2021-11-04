#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int bad =0;
    for(int i = 1; i<n; i++) {
        if(n%i == 0) {bad ++;}

    }
    if(bad>0) {printf("%d不是質數\n", n);}
    else {printf("%d是質數", n);}






return 0;
}
