#include <stdio.h>

int main() {

int a = 100, b = 999;
int temp;


printf("a:%d  b:%d                 temp:%d\n", a ,b ,temp);

temp = a;
printf("a:%d  b:%d                 temp:%d\n", a ,b ,temp);

a = b;
printf("a:%d  b:%d                 temp:%d\n", a ,b ,temp);

b =temp;
printf("a:%d  b:%d                 temp:%d\n", a ,b ,temp);
return 0;
}
