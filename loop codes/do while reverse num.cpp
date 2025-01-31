#include<stdio.h>
int main()
{
	int n, remainder, reverse=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	do {
		remainder = n%10;
		reverse = reverse*10 + remainder;
		n/=10;
	} while (n!=0);
	printf("Reverse = %d", reverse);
	return 0;
} 
