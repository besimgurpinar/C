#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i,j=0,kel=0,puan=0,kontra=0;
	char sorgu[20],veri[13][15],kr[500];
	FILE *fp=fopen("kral.txt","a+");
	fscanf(fp,"%s",kr);
	for(i=0;i<strlen(kr);i++){
		if(kr[i]==NULL) break;
		if(kr[i]==';'){
			veri[kel][j]=NULL;
			kel++;j=0;
		}
		else{
			veri[kel][j]=kr[i];
			j++;
		}			
	}
	printf("%s",veri[11]);
	scanf("%s",sorgu);
	for(i=0;i<kel;i++){
		puan=0;
		for(j=0;j<strlen(sorgu);j++){
			if(veri[i][j]==sorgu[j]) puan++;
		}
		if(strlen(sorgu)==puan) printf("aradigin kelime var");
	}
	


	
	
	return 0;
}
