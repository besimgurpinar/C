#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,i;
	float sonuc=0;
	printf("a'yi girin -> ");
	scanf("%d",&a);
	printf("b'yi girin -> ");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		sonuc+=a;
	}
	printf("Sonuc: %.0f",sonuc);
	
	return 0;
}
