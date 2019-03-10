#include <stdio.h>
#include <stdlib.h>
int i,j,n,c,enb=0;
int bolunen(void){
			
		for(i=0;i<n;i++){
			scanf("%d",&j);
			if(j>enb&&j%c==0) enb=j;
			
		}
		return enb;
	}

int main(int argc, char *argv[]) {
	
	printf("kac sayi alinsin");
	scanf("%d",&n);
	printf("kaca bolunsun");
	scanf("%d",&c);
	printf("en buyuk sayi %d",bolunen());
	
	return 0;
}
