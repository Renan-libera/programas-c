#include <stdio.h>

main(){
	char ecivil, nome[120];
	
	printf("\n Digite o sexo s/c: ");
	fflush(stdin);
	ecivil=getchar();
	printf("\n Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	
	if(ecivil =='s' )
	printf( "\n voce esta solteiro %s", nome);
	
	else if (ecivil =='c')
	printf("\n voce esta casado");
	
	else
	printf("\n caracter invalido");
		

}

