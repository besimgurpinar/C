#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,c;
	printf("bolunecek sayi ");
	scanf("%d",&a);
	printf("kaca bolunsun ");
	scanf("%d",&b);
	while(a>=b){
		a=a-b;
		c++;
	}
	printf("bolum:%d kalan:%d",c,a);
	return 0;
}
