#include <stdio.h>

int main()
{

	int n;
	scanf("%d", &n);

	float sum = 0;

	for(int i = 1; i<=n; i++) {
		int s;
		scanf("%d", &s);
		sum = sum + s;
	}


	printf("%.2f", sum/n);




}
