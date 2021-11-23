// the following code will try to figure out if there is a sequence of chars in the given statement
//if there is a needle in the haystack and report how many are there
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
  char my_needle[] = "needle";
	char haystack[] = "went to the market got 2 needlesgave my pal a needle single oneedlneedle.";// note how the haystack has "pre-chars" some how similar to the needle

  int i = 0;
	int j = 0;
	int occurence = 0;
	int length = (int)strlen(my_needle); 
  
 
	while(haystack[i] != '\0') {//if we aren't at the end

    if(haystack[i] == my_needle[j]) { //and the first char matches...
		  while(haystack[i] == my_needle[j] && haystack[i] !='\0') {    //check if the first char matches and also we are not at the end of the array
				i++;// increment the value of i so as to move to next char
        j++;// increment the value of j so as to move to next char
      } 
      if(j == length) { // if the position of char at j is equal to the length of the needle//then we have an occurence
        occurence++;
       }
    }
    else { //in the case the first/subsequent char didn't match 
      i++; //increment the value of i to move to the next char of the hay stack
			j = 0; //reset the position of j to the first index of the needle

			if(haystack[i] == my_needle[j]) { // check if we have a match
        while(haystack[i] == my_needle[j] && haystack[i] !='\0') {////continue and check if the  char at the index of i matches and if still we are not at the end of the array
					i++;// increment the value of i so as to move to next char
          j++;// increment the value of i so as to move to next char
        } 
        if(j == length) { 
          occurence++; //then we have a needle
        }
       }              
      }
              //if the second(next) haystack char didnt match ....set j at zero
              //also note the index of the char at haystack is not incremented
              //this is incase we had a match of the first few chars present in the haystack 
              
	j = 0; 
 }
	    
 if(occurence > 0) {//print out the number of times the needle is in the haystack
  printf("You have %d needle(s)\n", occurence);
 }
 else {
  printf("You have no needle(s)\n");//in the event there are no occurence
 }       
  return 0;
}
