#include<stdio.h>

/*
Dosya i�lemi �rne�i
*/

int main(){
	int no,ort;
	char ad[30];
	
	FILE *dosya;
	if((dosya=fopen("ogrKay�t.txt","w"))==NULL)
	   printf("Dosya olu�turulamad�...\n");
	else{
		printf("Ogrenci adi,no ve ortalamasini giriniz\ncikis icin (Ctrl+Z) basiniz.\n");
		scanf("%s%d%d",&ad,&no,&ort);
		while(! feof(stdin))
		{
			fprintf(dosya,"%s\t%d\t%d\n",ad,no,ort);
			printf("\n: ?:");
			scanf("%s%d%d",&ad,&no,&ort);
		}
		fclose(dosya);
		printf("Yazma islemi tamamlandi,okuma islemine geciyoruz...\n\n");
	}
	if((dosya=fopen("ogrKay�t.txt","r"))==NULL)
	   printf("Dosya bulunamadi...\n");
	else{
		printf("ad\tno\tort\n");
		while(!feof(dosya)){
			fscanf(dosya,"%s\t%d\t%d\n",&ad,&no,&ort);
			printf("%s\t%d\t%d\n",ad,no,ort);
		}
		fclose(dosya);
		printf("\nOkuma islemi tamamlandi.");
	}
	
	
	return 0;
}
