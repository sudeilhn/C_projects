#include<stdio.h>
#include<stdlib.h>


/*
Bir elektirk da��t�m �irketi verdikleri
hizmet kar��l���nda m��terilerinden ayl�k olarak 
harcanan toplam kilowatt saat miktar�na ve
belirli bir abonelik �creti talep etmektedir.
Birim kilowatt saat �creti ve abonelik �creti her ay
ayl�k enflasyon oran�nda artmaktad�r.
Buna g�re m��terinin bir aya ait �deyece�i elektrik 
faturas�n�n miktar�n� hesaplayan program.
Fatura miktar�=Harcanan elektrik*Birim fiyat+Abone �creti
*/
int main(){
	
	float odenecekfatura,eskibirimfiyat,yenibirimfiyat;
	float enflasyon,eskiAboneucreti,yeniAboneucreti;
	int yeniOkuma,eskiOkuma,toplamharcananelektrik;
	
	printf("Enflasyon oranini giriniz:");
	scanf("%f",&enflasyon);
	printf("Onceki aya ait birim fiyat miktarini giriniz:");
	scanf("%f",&eskibirimfiyat);
	printf("Onceki aya ait abonelik ucretini giriniz:");
	scanf("%f",&eskiAboneucreti);
	printf("Bir onceki aya ait okuma degerini giriniz:");
	scanf("%d",&eskiOkuma);
	printf("Bu aya ait okuma degerini giriniz:");
	scanf("%d",&yeniOkuma);
	
	toplamharcananelektrik=yeniOkuma-eskiOkuma;
	yenibirimfiyat=eskibirimfiyat*(1+enflasyon/100);
	yeniAboneucreti=eskiAboneucreti*(1+enflasyon/100);
	
	odenecekfatura=toplamharcananelektrik*yenibirimfiyat+yeniAboneucreti;
	printf("\nOdeyeceginiz fatura tutar�:%f\n\n",odenecekfatura);
	
	return 0;
	
}

