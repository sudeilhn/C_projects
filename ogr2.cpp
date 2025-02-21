#include<stdio.h>

/*
Eriþimli dosya örneði 
*/

struct ogrenci{
	int no;
	char ad[30];
};

int main(){
	struct ogrenci o1 ={0,""};
	int i;
	FILE *dosya;
	
	if((dosya = fopen("ogrenciUygulamasi.txt","w"))==NULL)
	  printf("Dosya bulunamadi...\n");
	else{
		for(i=1;i<=100;i++)
		  fwrite(&o1 ,(sizeof(struct ogrenci)),1,dosya);
		  
		printf("Dosya olusturma islemi tamam...\n");
		fclose(dosya);
	}
	
	if((dosya = fopen("ogrenciUygulamasi.txt","r+"))==NULL)
	   printf("Dosya bulunamadi...\n");
	else{
		printf("cikis icin 0'a basin.\n numara [1-100]:");
		scanf("%d",&o1.no);
		
		while(o1.no!=0){
			printf("ad:");
			scanf("%s",o1.ad);
			fseek(dosya,(o1.no -1)* sizeof(struct ogrenci),SEEK_SET);
			fwrite(&o1,sizeof(struct ogrenci),1, dosya);
			printf("numara [1-100]:");
			scanf("%d",&o1.no);
		}
		printf("Dosyaya yazma islemi tamam...\n");
		fclose(dosya);
	}
	
	
	if((dosya = fopen("ogrenciUygulamasi.txt","r"))==NULL)
	   printf("Dosya bulunamadi...\n");
	else{
		
		printf("NUMARA  -  AD \n");
		
		while( ! feof(dosya)){
			fread(&o1, sizeof(struct ogrenci),1,dosya);
			if(o1.no!=0)
			printf("%d\t  %s\n",o1.no,o1.ad);
			
		}
		
		printf("Dosyadan okuma islemi tamam.\n");
		fclose(dosya);
	}
	
	return 0;
	
}
