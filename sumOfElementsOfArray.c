//SUM OF ARRAY ELEMENTS
#include<stdio.h>
int main(){
	int arrayOfNumbers[5],i,sum=0;
	for(i=0;i<5;i++){
		printf("Enter %dth element of array: ",i);
		scanf("%d",&arrayOfNumbers[i]);
	}
	for(i=0;i<5;i++){
		sum=sum+arrayOfNumbers[i];
	}
	printf("%d",sum);
	
}
