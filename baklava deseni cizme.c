#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int boyut,bosluk,i,j,k,l=1,o;
	boyut=23;
	bosluk=boyut/2;
	for(i=0;i<boyut;i++){
		
		for(j=0;j<bosluk+9;j++){
			printf("  ");
		}
		for(l=0;l<=k;l++){
			printf("%c",'*');
		}
		if(i<boyut/2){
			bosluk--;
			k+=2;
		}
		else{
			bosluk++;
			k-=2;
		}
		
		printf("\n");
	}
	




	return 0;
}
