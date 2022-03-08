#include<stdio.h>//include inclui a ilioteca <stdio.h>


int main(){//Função principal inteiros
	
	int i, dado, par, impar;
	
	printf("Digite o valor desejado\n");
	scanf("%d" , &dado);
	printf("Deseja numeros impares ou pares?\n");
	scanf("%d" , &par);
	if(par){
	printf("Os numeros pares sao:\n");
	
	while(i <=dado){
		
		printf("%d " , i);
		i = i + 2;
		}
	}
	if(impar){
	i = 1;
	printf("Os numeros impares sao:\n");
	
	while(i <=dado){
		
		printf("%d " , i);
		i = i + 2;
		}
	}
}

