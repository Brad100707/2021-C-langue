
#include <stdio.h>

int main() {

int a = 100, b = 999;
int temp;
printf("%d   %d\n", a, b);

temp = a;

a = b;

b = temp;


printf("%d   %d", a, b);


return 0;

}
