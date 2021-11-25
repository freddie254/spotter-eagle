#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arrayComparison(char *arr1, char *arr2){
      	int i;
	int length = (int)strlen(arr1);

      	for (i = 0; i < length; i++)
      		if (arr1[i] != arr2[i]) return 1; //as soon as the char dont match

      		return 0;
}
int main (){
	char party_A [] = "the lazy dog jumped over";
	char party_B [] = "the lazy dog jumped over";

	if (arrayComparison(party_A, party_B) == 0){
		printf("the arrayas are the same");	
	}
	else{
		printf("the arrays are not the same");
	}
	
	return 0;
}
