#include<stdio.h>
#include<math.h>
int main()
{
	int n, remainder, sum=0, temp, digits=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp=n;
	while(n>0) {
		digits++;
		n/=10;
	}	
	n=temp;
	while(n>0) {
		remainder = n%10;
		sum += pow(remainder,digits);
		n/=10;
	} 
	if(sum==temp) {
		printf("%d is an armstrong number.", temp);
	} else {
		printf("%d is not an armstrong number.", temp);
	}
return 0;
}
