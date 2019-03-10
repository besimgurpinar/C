#include <stdio.h>
#include <stdlib.h>
	
int main() {
	int x,a=0,sonuc; 
	scanf("%d",&x);
	if(asal(x,x/2)){
	printf("%d asaldir",x);
	}
	else
	printf(" asal degil");
	
	return 0;
}
int asal(int x,int i){
	if(x<2){
		return 0;
	}
	if(i==1){
		return 1;
	}
	if(x%i==0)
		return 0;
	return asal(x,i-1);
}	
