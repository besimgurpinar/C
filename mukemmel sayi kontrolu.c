#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,top;
	for(i=2;i<100;i++){
		top=0;
		for(j=1;j<=i-1;j++){//i-1 e kadar kontrol ettik çünkü sayýnýn kendine bolumunu katmýyoruz.
			if(i%j==0){
				top+=j;
			}
		}
			if(i==top){
				printf("%d mukemmel sayidir\n",top);
			}
		
	}
	return 0;
}
