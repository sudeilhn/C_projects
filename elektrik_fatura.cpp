#include<stdio.h>
#include<stdlib.h>


/*
Bir elektirk daðýtým þirketi verdikleri
hizmet karþýlýðýnda müþterilerinden aylýk olarak 
harcanan toplam kilowatt saat miktarýna ve
belirli bir abonelik ücreti talep etmektedir.
Birim kilowatt saat ücreti ve abonelik ücreti her ay
aylýk enflasyon oranýnda artmaktadýr.
Buna göre müþterinin bir aya ait ödeyeceði elektrik 
faturasýnýn miktarýný hesaplayan program.
Fatura miktarý=Harcanan elektrik*Birim fiyat+Abone ücreti
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
	printf("\nOdeyeceginiz fatura tutarý:%f\n\n",odenecekfatura);
	
	return 0;
	
}

