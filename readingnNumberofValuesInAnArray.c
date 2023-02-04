//READING N NUMBER OF VALUES IN AN ARRAY
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
	for(i=0;i<size;i++){
		printf("%d",arrayOfNumbers[i]);
	}
	
}
