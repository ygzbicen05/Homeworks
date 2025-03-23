#include <stdio.h>

int homeValue,popularity,size;

void computeHomeValue(void){
	printf("Please enter the popularity: ");
	scanf("%d",&popularity);
	printf("Please enter the size: ");
	scanf("%d",&size);
	homeValue=(popularity*popularity*popularity+size*size)*10000;
	printf("Home value calculated is: %d",homeValue);
}

int main()
{
	computeHomeValue();
	return 0;
}