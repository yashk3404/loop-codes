#include<stdio.h>
int main()
{
	int factorial=1, choice, n, temp;
	do {
	printf("\n\n        MENU        \n\n");
	printf("\n1.) Calculate Factorial.\n2.) Check if number is prime.\n3.) Check if a number is even.\n4.) Exit.");
	printf("\n\nEnter your choice: \n");
	scanf("%d", &choice);
	
	switch(choice) {
		
		case 1:
		factorial=1;
		printf("Enter an integer: ");
		scanf("%d", &n);
		temp = n;
		for(int i=1; i<=n; i++) {
			factorial *= i;
		} printf("The facotiral of %d is %d", temp, factorial);
		break;
		
		case 2:
		printf("Enter an integer: ");
		scanf("%d", &n);
		temp=n;
		int isPrime=1;
		for(int i=2; i<=n/2; i++) {
			if(n%i==0) {
				isPrime = 0;
				break;
			}
			}
			if(isPrime) {
				printf("The number %d is a prime number.", temp);
			} else {
				printf("The number %d is not a prime number.", temp);
			}
		
		break;
		
		case 3:
		printf("Enter an integer: ");
		scanf("%d", &n);
		temp=n;
		if(n%2==0) {
			printf("%d is an even number.", temp);
		} else {
			printf("%d is not an even number.", temp);
		} break;
		
		case 4: 
		printf("Exiting....\n");
		break; 
		
		default:
		printf("Enter valid choice(1-4).");
	}
} while(choice!=4);

return 0;
}
