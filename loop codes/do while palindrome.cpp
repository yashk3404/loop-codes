#include<stdio.h>
int main()
{
	int n, original, remainder, reverse=0;
	printf("Enter a number to check if it's a palindrome: ");
	scanf("%d", &n);
	original=n;
	do { 
	remainder = n%10;
	reverse = reverse*10 + remainder;
	n /= 10;
	} while(n!=0);
	if (original==reverse) {
		printf("The number %d is a palindrome.", original);
	} else {
		printf("The number %d is not a palindrome.", original);
	}
	return 0;
}
