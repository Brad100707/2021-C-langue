#include <stdio.h>

int main()
{
int a, b;
scanf("%d %d", &a, &b);
int c = a%b;
printf("老大:%d 老二:%d 老三:%d\n", a, b, c);

while(1) {
    if(c==0) {break;}
    a=b;
    b=c;
    c=a%b;
    printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
}

printf("%d", b);





}
