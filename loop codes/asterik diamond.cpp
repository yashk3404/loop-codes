#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			printf(" ");
		}
		for(int k=1; k<=i*2-1; k++) {
			printf("*");
		}
	printf("\n");
	}
	
	for(int x=n-1; x>=1; x--) {
		for(int y=n-x; y>=1; y--) {
			printf(" ");
		}
		for(int z=x*2-1; z>=1; z--) {
			printf("*");
		}
	printf("\n");	
	}
return 0;
}
