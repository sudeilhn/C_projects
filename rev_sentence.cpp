#include<stdio.h>
#include<string.h>

/*
Girilen metni tersten yazan bir program
*/

int main(){
	
	char sentence [256];
	char reversedsentence [256];
	
	int i=0,characteresNum;
	
	printf("Write a sentence:");
	gets(sentence);
	
	while(sentence[i] != '\0')
	    i++;
		characteresNum=i-1;
	
		
	for(i=0;i<=characteresNum;i++)
		reversedsentence[i]=sentence[characteresNum-i];
		reversedsentence[i]=sentence[i];
	
	printf("Entered sentence:%s\n",sentence);
	printf("Reversed sentence:%s\n",reversedsentence);
	
	return 0;
	
}
