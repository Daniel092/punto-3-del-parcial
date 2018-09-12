#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void longitud(char c1, char c2){
	
}





int main() {

	char n1[20],n2[20];
	int res1, res2;
	printf("ingrese 2 nombres \n");
	gets(n1);
	gets(n2);
	
	res1 = strlen(n1);
	res2 = strlen(n2);
	
	if(res1 > res2){
		printf("%s\n", n1);
		printf("%s", n2);
	}else if(res1 < res2){
		printf("%s\n", n2);
		printf("%s", n1);
	}else{
		printf("Ambos tiene la misma cantidad de caracteres");
		printf("%s\n", n2);
		printf("%s", n1);
	}
	
	
	
	
	
	
	
	return 0;
}

