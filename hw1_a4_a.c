#include <stdio.h>

int computeHomeValue(int popularity,int size){
	return (popularity*popularity*popularity+size*size)*10000;
}

int main()
{
	int homeValue,popularity,size;
	printf("Please enter the popularity: ");
	scanf("%d",&popularity);
	printf("Please enter the size: ");
	scanf("%d",&size);
	homeValue=computeHomeValue(popularity,size);
	printf("Home value calculated is: %d",homeValue); // output
	return 0;
}