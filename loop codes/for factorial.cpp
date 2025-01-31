#include<stdio.h>
int main()
{
	int n;
	unsigned long long factorial;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n<0) {
		printf("Factorial of a negative number doesn't exist.");
	} else {
		for(int i=1; i<=n; i++) {
			factorial *= i;
		}
		printf("Factorial = %d", factorial);
	} 
	return 0;
}
