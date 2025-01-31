#include<stdio.h>
int main()
{
	int i=1, n, factorial=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n==0) {
		printf("factorial = 1");
	} else {
	
      	while(i<=n) {
		factorial *= i;
		i++; 
	    }
	    printf("factorial of %d is %d", n, factorial);
    }
	return 0;
}
