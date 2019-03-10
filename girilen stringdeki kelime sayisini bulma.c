#include<stdio.h>

int main()
{
   int i,a=0;
   char bosluk[1]={" "};//bosluk karakteri tanýmlamasý
   char str[500];
 
   printf("Bir yazi giriniz\n");
   gets(str);
 for(i=0;i<strlen(str);i++){//strlen, string lenght ten gelir karakter uzunlugu anlamýndadýr,toplam girilen karakter sayýsýný tutmayla gorevli. 
 		if(str[i]==bosluk[j]){//her bosluk karakteri gordugunde bir kelime sayacak,ancak 5 kelimelik dizide 4 boþluk var o yuzden yazdýrýrken 1 arttýracaðýz
 		a++;
	 }

 }
 printf("Cumledeki kelime sayisi:%d\nCumledeki harf sayisi:%d",a+1,strlen(str)-a);//harf sayýsý icin toplam karakter sayisindan bosluk karakterlerini çýkardýk
   return 0;
}
