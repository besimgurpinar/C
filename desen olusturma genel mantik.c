#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,x;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			if(i==0||i==x-1||j==0||j==x-1||j+i==x-1||j==i){
				printf("*");
			}
			else printf(" ");
		}
	printf("\n");
	}
	
	return 0;
}
