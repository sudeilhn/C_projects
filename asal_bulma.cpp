#include<stdio.h>
/*
Ýki sayý arasýndaki asal sayýlarý bulan program
*/

int isPrime(int num){
	if(num<=1)
	   return 0;
	   
	for(int i=2;i*i<=num;i++){
		if(num%i==0)
		   return 0;
		else
		   return 1;
	}
}
	
	
void findPrimes(int start,int end){
	printf("\n%d - %d arasindaki asal sayilar:",start,end);
	
	for(int i=start;i<=end;i++){
		if(isPrime(i)){
		  printf("%d	",i);
	}
	}
	printf("\n");
}

int main(){
	int s1,s2;
	
	printf("Iki sayi girin:");
	scanf("%d%d",&s1,&s2);
	
	findPrimes(s1,s2);
	
	return 0;
	
}

