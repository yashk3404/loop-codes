#include<stdio.h>
int main()
{
	int n;
	printf("Enter the length of the sides: ");
	scanf("%d", &n);
	for(int a=1; a<=n; a++) {
		printf("*");
	} printf("\n");
	for(int b=1; b<=n/2; b++) {
			printf("*");
		for(int c=1; c<=n-2; c++) {
			printf(" ");
		}
			printf("*");
		printf("\n");
	}
	if(n>1) {
	for(int d=1; d<=n; d++) {
		printf("*");
	}
    }
return 0;
}
