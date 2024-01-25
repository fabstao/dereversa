#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char **argv) {
	if(argc<2) {
		printf("ERROR: Uso: %s <texto>\n",argv[0]);
		exit(1); 
	}
	char texto[argc];
	strcpy(texto, argv[1]);
	int leng = strlen(texto);
	char *otexto = malloc(leng+1);
	for(int i=leng-1;i>=0;i--) {
		otexto[leng-1-i] = texto[i];
	}	
	printf("%s\n",otexto);
	return 0;
}
