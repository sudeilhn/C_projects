#include<stdio.h>
#include<math.h>

#define PI 3.14159265358979323846


/*
Seçim yaparak dikdörtgen,üçgen daire ve karenin alan ve çevrelerini hesaplayan program
*/

// alan hesaplama fonksiyonlarý
float DikdortgenAlan(float uzunluk,float genislik){
	return uzunluk*genislik;
}

float UcgenAlan(float taban,float yukseklik){
	return 0.5*taban*yukseklik;
}

float DaireAlan(float yaricap){
	return PI*yaricap*yaricap;
}

float KareAlan(float kenar){
	return kenar*kenar;
}

//çevre hesaplama fonskisyonlarý

float DikdortgenCevre(float uzunluk,float genislik){
	return 2*(uzunluk+genislik);
}

float UcgenCevre(float kenar1,float kenar2,float kenar3){
	return kenar1+kenar2+kenar3;
}

float DaireCevre(float yaricap){
	return 2*PI*yaricap;
}

float KareCevre(float kenar){
	return 4*kenar;
}


int main(){
	
	float deger1,deger2,deger3,deger4;
	int secim;
	
	printf("Alan ve cevre hesaplamak icin secim yapin:\n");
	printf("1.Dikdortgen\n");
	printf("2.Ucgen\n");
	printf("3.Daire\n");
	printf("4.Kare\n");
	printf("Seciminiz:");
	scanf("%d",&secim);
	
	
	switch(secim){
		case 1:
		
		printf("Dikdortgenin iki kenarini girin:");
		scanf("%f%f",&deger1,&deger2);
		printf("Alan: %.2f\n",DikdortgenAlan(deger1,deger2));
		printf("Cevre: %.2f\n",DikdortgenCevre(deger1,deger2));
		break;
		
		case 2:
		
		printf("Ucgenin taban uzunlugunu,yuksekligini ve iki kenarini girin:");
		scanf("%f%f%f%f",&deger1,&deger2,&deger3,&deger4);
		printf("Alan: %.2f\n",UcgenAlan(deger1,deger2));
		printf("Cevre: %.2f\n",UcgenCevre(deger1,deger3,deger4));
		break;
		
		case 3:
		
		printf("Dairenin yaricapini girin:");
		scanf("%f",&deger1);
		printf("Alan: %.2f\n",DaireAlan(deger1));
		printf("Cevre: %.2f\n",DaireCevre(deger1));
		break;
		
		case 4:
		
		printf("Karenin bir kenarini girin:");
		scanf("%f",&deger1);
		printf("Alan: %.2f\n",KareAlan(deger1));
		printf("Cevre: %.2f\n",KareCevre(deger1));
		break;
		
		default:
		printf("Gecersiz islem.\n");
		break;
			
	}
	
	return 0;
}
