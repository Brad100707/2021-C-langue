
#include <stdio.h>

int main()
{
	printf("\n");
	int n;
	scanf("%d", &n);

	int v[n][n];

	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++ ) {
			scanf("%d", &v[i][j]);
		}
	}



	for(int i =0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			printf("%3d", v[j][i]);
		}
		printf("\n");
	}













}
