#include <stdio.h>

main(){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	if(num<10)
	printf("\n \n O numero é maior que 10");
		
	if (num>10)
	printf("\n\n O numero é menor que 10");
	
	else
	printf("O numero é igual a 10");
}
