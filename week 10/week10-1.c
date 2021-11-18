#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
    int ans = 0;
	int i, j;
	for(i = 2; i<=n; i++) {
	int bad = 0;
		for(j=2; j<i; j++) {
			if(i%j == 0) {bad++;}

		}

		if(bad == 0) {printf("%d ", j);
            ans ++;
        }
	}

printf("\n");
printf("ans:%d", ans);

return 0;



}
