#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,top=0;
	int matris[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		scanf("%d",&matris[i][j]);	
		}	
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	printf("Sayilarin toplami\n");
	for(j=0;j<3;j++){
		for(i=0;i<3;i++){
			top+=matris[i][j];
			
		}
		printf("%d ",top);top=0;
	}
	
	
	
	
	
	
	
	return 0;
}
