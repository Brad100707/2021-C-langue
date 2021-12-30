#include <stdio.h>
#include <string.h>

char line[300]="11110000111010101011";

int main()
{
    int ans=0;
    int N = strlen(line);
    for(int i =0; i<N; i++) {
        if(line[i] == '1') {ans++;}

    }
    printf("¦³%d­Ó1\n", ans);
}
