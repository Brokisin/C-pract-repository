#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale( LC_ALL, "" );
	
//	int idade, cont=0, somadorIdade=0, quantIdade;
//	float media;
//	
//	printf("\nQuantas idades deseja calcular? ");
//	scanf("%i", &quantIdade);
//	fflush(stdin);
//	
//	while(cont < quantIdade){
//		printf("\nDigite sua idade:");
//		scanf("%i", &idade);
//		fflush(stdin);
//		somadorIdade = somadorIdade + idade;
//		
//		cont=cont+1;
//	}
//	
//	media = somadorIdade/quantIdade;
//	printf("\nA m�dia de %i idade(s) � %.2f", quantIdade, media);


	//EXERC�CIOS
	
//	printf("\nE1 - Porque devemos usar estruturas de repeti��o ?\n");
//	printf("Para evitarmos, geralmente, la�os de repeti��o.");
//	printf("\nE2 - O que � uma vari�vel contadora ?\n");
//	printf("� uma vari�vel que serve para realizar a contabilidade de algo inserido no c�digo.");
//	printf("\nE3 - O que � uma vari�vel acumuladora ?\n");
//	printf("� uma vari�vel que vai acumulando diversos valores ao longo do c�digo.");
//	printf("\nE4 - O que s�o repeti��es aninhadas e quando usar ?\n");
//	printf("Repeti��es aninhadas � quando coloca-se um WHILE dentro de outro WHILE.\n");
//	printf("Para c�digos pequenos, pode-se utilizar esse tipo de estrutura, por�m n�o � aconselh�vel.");
//	
//	//PR�TICA
//	
//	printf("\nE1 - Escrever um algoritmo que l� 5 valores para A, um de cada vez, e conta quantos destes valores s�o negativos, escrevendo esta informa��o na tela.\n");
//	
//	int cont=0, contNegativo=0, contPositivo=0;
//	float numeroAl;
//	
//	printf("\nDigite 5 n�meros quaisquer:\n");
//	while(cont<5){
//		printf("\n>");
//		scanf("%f",&numeroAl);
//		fflush(stdin);
//		if(numeroAl < 0){
//			contNegativo++;
//		} else if(numeroAl >= 0){
//			contPositivo++;
//		}
//		cont++;
//	}
//	
//	printf("\nN�meros positivos: %i\n", contPositivo);
//	printf("\nN�meros negativos: %i\n", contNegativo);
	
//	
//	printf("\nE2 - Escrever um algoritmo que gera e escreve os n�meros �mpares entre 100 e 200.\n");
//	
//	int cont=0, contImpar=0, cont2=101;
//	
////	for(cont2; cont2<200; cont2=cont2+2){
////		printf("\nN�mero �mpar: %i", cont2);
////	}
//	
//	while(cont < 200){
//		contImpar = cont + 1;
//		if(contImpar%2==1){
//			printf("\nN�mero �mpar: %i", contImpar);
//			cont++;
//		}else{
//			cont++;
//		}
//	}
	
//	printf("\nE3 - Escrever um algoritmo que l� 10 valores, um de cada vez, e conta quantos deles est�o no intervalo (10 a 20) e quantos deles est�o fora deste intervalo, escrevendo esta informa��o na tela.\n");
//
//	
//	int cont=0, contNum=0, contFora=0;
//	float numero;
//	
//	printf("\nEscreva um n�mero");
//	while(cont<10){
//		printf("\n>");
//		scanf("%f",&numero);
//		fflush(stdin);
//		if(numero>=10 && numero<=20){
//			contNum++;
//		} else {
//			contFora++;
//		}
//		cont++;
//	}
//	printf("\nQuantidade dentro do intervalo: %i\n", contNum);
//	printf("\nQuantidade fora do intervalo: %i\n", contFora);
	
//	printf("\nE4 - Escrever um algoritmo que solicite ao usu�rio o seguinte menu:\n");
//	
//	int opt;
//	
//	while(1){
//		printf("\n-------------\n1. Cadastrar Produto\n2. Remover Produto\n3. Listar Produto\n4. Sair\n-------------\n");
//		printf("\n>");
//		scanf("%i",&opt);
//		if(opt==1){
//			printf("\nCadastrou Produto.\n");
//		} else if(opt==2){
//			printf("\nRemoveu Produto.\n");
//		} else if(opt==3){
//			printf("\nListou Produto.\n");
//		} else if(opt==4){
//			printf("\nSaindo do Programa...\n");
//			break;
//		} else {
//			printf("\nOp��o inv�lida.\n");
//		}
//	}
	
//	printf("\nE5 - \n");
//	
//	int cont=0;
//	float numPositivo, somaNumPositivo;
//	
//	printf("\nInsira um n�mero:\n");
//	
//	while(1){
//		printf("\n>");
//		scanf("%f",&numPositivo);
//		fflush(stdin);
//		if(numPositivo >= 0){
//			somaNumPositivo = somaNumPositivo + numPositivo;
//			cont++;
//		} else {
//			printf("\nSaindo...\n");
//			printf("\nQtde de n�meros digitados: %i\n", cont);
//			printf("Soma dos n�meros: %.2f\n", somaNumPositivo);
//			break;
//		}
//	}
	
//	printf("\nE6 - \n");
//	
//	int cont=0, cont2=0, numFilhos;
//	float salarioS, maiorSalario, mediaSalario, mediaTotalSalario, mediaFilhos=0, somaFilhos;
//	while(1){
//		printf("\nInsira seu sal�rio:");
//		printf("\n>");
//		scanf("%f",&salarioS);
//		fflush(stdin);
//		if(salarioS >= 0){
//			cont2++;
//			mediaSalario = mediaSalario + salarioS;
//			mediaTotalSalario = (mediaSalario / cont2);
//			
//			printf("\nInsira a quantidade de filhos:");
//			printf("\n>");
//			scanf("%i",&numFilhos);
//			fflush(stdin);
//			if(salarioS > maiorSalario){
//				maiorSalario = salarioS;
//			}
//			if(numFilhos >= 0){
//				cont++;
//				somaFilhos = somaFilhos + numFilhos;
//				mediaFilhos = (somaFilhos / cont);
//			} else {
//				printf("\nQuantidade incorreta.");
//				printf("\nSaindo...\n");
//				break;
//			}
//		} else {
//			printf("\nSaindo...\n");
//			printf("\nM�dia de Sal�rio: %.2f\n", mediaTotalSalario);
//			printf("\nM�dia de Filhos: %.1f\n", mediaFilhos);
//			printf("\nMaior Sal�rio: %.2f\n", maiorSalario);
//			break;
//		}
//	}
	
	printf("\nE7 - \n");
	
	int numTabuada, cont=0, valorTabuada;
	
	while(1){
		numTabuada=0;
		valorTabuada=0;
		cont=0;
		printf("\nEscolha qual tabuada desejas:\n");
		printf("\nPara sair do programa, digite -1.\n");
		printf("> ");
		scanf("%i",&numTabuada);
		fflush(stdin);
		if(numTabuada >= 0){
			printf("\n");
			while(cont < 10){
				cont++;
				valorTabuada = numTabuada*cont;
				printf("%i x %i = %i\n", numTabuada, cont, valorTabuada);
			}
		} else {
			printf("\nSaindo...\n");
			break;
		}
	}
	
	return 0;
}
















