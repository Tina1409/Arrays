//READING N NUMBER OF VALUES IN AN ARRAY AND PRINTING THEM IN REVERSE
#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	int arrayOfNumbers[size],i;
	for(i=0;i<size;i++){
		printf("Enter %dth element of array: ",i);
		scanf("%d",&arrayOfNumbers[i]);
	}
	printf("Array is: ");
	for(i=0;i<size;i++){
		printf("%d",arrayOfNumbers[i]);
	}
	printf("\nArray in reverse is: ");
	for(i=size-1;i>=0;i--){
		printf("%d",arrayOfNumbers[i]);
	}
	
}
