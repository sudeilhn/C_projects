#include<stdio.h>
#include<stdlib.h>

/*
Kitap sipari� ve indirim program� 
*/

int main(){
	int bookPrice,orderQuantity;
	float discountRate,nodiscountprice,discountprice,sum;
	bookPrice=20;
	orderQuantity=0;
	
	printf("Kac adet kitap siparis vermek istiyorsunuz:");
	scanf("%d",&orderQuantity);
	
	if(orderQuantity>=60){
		discountRate=0.30;
	}else{
	   if(orderQuantity>=30 && orderQuantity<=60){
		discountRate=0.20;
	}  else if(orderQuantity>=10 && orderQuantity<=30){
		discountRate=0.12;
	}  else{
		discountRate=0.01;
	}
    }

   nodiscountprice=orderQuantity*bookPrice;
   printf("Kitab�n indirimsiz tutari:%f \n",nodiscountprice);
   discountprice=orderQuantity*bookPrice*discountRate;
   printf("Indirim tutariniz:%f TL \n",discountprice);
   sum=nodiscountprice-discountprice;
   printf("Sipari�lerinizin toplam tutar�:%f TL \n",sum);
   
   return 0;
}
