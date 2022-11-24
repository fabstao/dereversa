#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main(int argc, char **argv) {
	//printf("Args: %d , Arg: %s \n", argc, argv[1]); 
	char *texto;
	strcpy(texto, argv[1]);
	int leng = strlen(texto);
	char *otexto = malloc(leng+1);
	for(int i=leng-1;i>=0;i--) {
		otexto[leng-1-i] = texto[i];
	}	
	printf("%s\n",otexto);
}
