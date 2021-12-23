#include <stdio.h>

int main() {

int x, a, b, c;


scanf("%d%d%d", &a, &b, &c);

for(x =-100; x >= -100 && x <= 100; x++) {
    if(x*x*a + x*b + c == 0 && x<0) {printf("(x%d)\n", x);}
    if(x*x*a + x*b + c == 0 && x>0) {printf("(x+%d)\n", x);}
    if(b*b - 4a*c)
}

return 0;


}
