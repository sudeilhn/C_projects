#include<stdio.h>

/*
Dosya iþlemi örneði
*/

int main(){
	int no,ort;
	char ad[30];
	
	FILE *dosya;
	if((dosya=fopen("ogrKayýt.txt","w"))==NULL)
	   printf("Dosya oluþturulamadý...\n");
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
	if((dosya=fopen("ogrKayýt.txt","r"))==NULL)
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
