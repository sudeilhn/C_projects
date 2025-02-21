#include<stdio.h>
#include<math.h>

/*
Pointer kullanarak kullanýcýdan aldýðý iki sayýnýn toplama,çýkarma,çarpma 
ve bölme iþlemlerini yapan program
*/

void addition(int *a,int *b){
	printf("\nToplam:%d\n",*a + *b);
}
void subtraction(int *a,int *b){
	printf("\nCikarma:%d\n",*a - *b);
}
void multiplication(int *a,int *b){
	printf("\nCarpma:%d\n",*a * *b);
}
void division(int *a,int *b){
	if(*b==0)
	   printf("\nBolen sifir olamaz.");
	else
	   printf("\nBolme:%d",*a / *b);
}

int main(){
	
	int n1,n2;
	
	printf("Iki sayi girin:");
	scanf("%d%d",&n1,&n2);
	
	printf("\nToplama islemi:");
	addition(&n1,&n2);
	
	printf("\nCikarma islemi:");
	subtraction(&n1,&n2);
	
	printf("\nCarpma islemi:");
	multiplication(&n1,&n2);
	
	printf("\nBolme islemi:");
	division(&n1,&n2);
	
	return 0;
}
