//PROGRAM TO PRINT ONLY UNIQUES ELEMENTS IN AN ARRAY
#include<stdio.h>
int main(){
	int arrayOfNumbers[5],i;
	for(i=0;i<5;i++){
		printf("Enter %dth element of the array: ",i);
		scanf("%d",&arrayOfNumbers[i]);
	}
    for(i=0;i<5;i++){
    	if(arrayOfNumbers[i]!=arrayOfNumbers[i-1]){
    		printf("%d",arrayOfNumbers[i]);
		}
	}	
}
