#include <stdio.h>
#include <stdlib.h>


int main() {
	int parola=1881,i,syc=0,ctrl=0;
	do{	
		printf("Parola girin parola 1000-9999 arasi olmalidir ");
		scanf("%d",&i);
		if(i<1000||i>9999){
			printf("girdiginiz sayi aralikta degildir tekrar deneyin\n");//yanlýþ giriþ olarak kabul edilmeyecek
		}
		else{
		
			syc++;
		
			if(i==parola){
				printf("sifre dogru");
				ctrl=1;
			}
			else{
				printf("yanlis girdiniz kalan hakkiniz %d\n",3-syc);
			}
		}
	}while(syc<3&&ctrl==0);
	getch();
		
	return 0;
}
