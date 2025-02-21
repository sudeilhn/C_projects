#include<stdio.h>
#include<stdlib.h>

/*
Kullanýcýdan alýnan 3 kenar uzunluðuna göre üçgen türünü belirleyen program
*/
int main(){
	int a,b,c;
	char longSide;
	
	printf("Ucgenin kenar uzunluklarini girin:");
	scanf("%d%d%d",&a,&b,&c);
	
	
	if(a>b && a>c){
		longSide='a';
	}else if(b>a && b>c){
		longSide='b';
	}else{
	    longSide='c';
	}
	printf("LongSide:%c",longSide);
	printf("\n");
	
    if(longSide == 'a'){
		if(a*a == b*b + c*c){
			printf("Dik acili ucgen.\n");
		}
		else if(a*a >> b*b + c*c){
			printf("Genis acili ucgen.\n");
		}
		else if(a*a << b*b + c*c){
			printf("Dar acili ucgen.\n");
		}
		else{
			printf("Girilen kenarlar bir ucgen olusturmaz.");
		}
    }
	else if(longSide == 'b'){
	    if(b*b == a*a + c*c){
			printf("Dik acili ucgen.\n");
		}
		else if(b*b >> a*a + c*c){
			printf("Genis acili ucgen.\n");
		}
		else if(b*b << a*a + c*c){
			printf("Dar acili ucgen.\n");
		}
		else{
			printf("Girilen kenarlar bir ucgen olusturmaz.");
		}
	}
	else{
	    if(c*c == a*a + b*b){
			printf("Dik acili ucgen.\n");
		}
		else if(c*c >> a*a + b*b){
			printf("Genis acili ucgen.\n");
		}
		else if(c*c << a*a + b*b){
			printf("Dar acili ucgen.\n");
		}
		else{
			printf("Girilen kenarlar bir ucgen olusturmaz.");
		}
	}
	
	return 0;
}
