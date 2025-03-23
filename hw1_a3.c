#include <stdio.h>
int main()
{
	int homeValue,popularity,size;
	printf("Please enter the popularity: ");
	scanf("%d",&popularity); // gets the popularity value from user
	printf("Please enter the size: ");
	scanf("%d",&size); // gets the size value from user
	homeValue=(popularity*popularity*popularity+size*size)*10000;
	printf("Home value calculated is: %d",homeValue); // output
	return 0;
}