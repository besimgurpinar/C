#include <stdio.h>
#include <stdlib.h>

int main() {
	int dizi[5],i,j,k,artik;
	for(i=0;i<5;i++){
		scanf("%d",&dizi[i]);
	}
	printf("ilk sira\n");
	for(i=0;i<5;i++){
		printf("\t%d",dizi[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(dizi[i]>dizi[j]){
				artik=dizi[j];
				dizi[j]=dizi[i];
				dizi[i]=artik;
			}
		}
	}
	printf("\nkucukten buyuge sira\n");
	for(i=0;i<5;i++){
		printf("\t%d",dizi[i]);
	}
	
	getch();

	return 0;
}
