#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fim = 0;
int ini = 0;
int val1;

struct cor{
	int ra_;
	char nome_[10];
	char ext_[10];
	int mat_;
}

cor[5];

void enfileirar(){
	if (fim == 5) {
		val1 = 2;
	}else{
		printf("Digite o Ra:");
		scanf("%i", &cor[fim].ra_);
		printf("Digite o nome do arquivo:");
		scanf("%s", cor[fim].nome_);
		printf("Digite a Extensão do arquivo:");
		scanf("%s", cor[fim].ext_);
		printf("Matrícula do professor:");
		scanf("%i", &cor[fim].mat_);
		system("cls");
		fim++;
	}
}

void desenfileirar(){
	if (ini == fim) {
		val1 = 3;
	}
	else {
		int i;
		for (i = 0; i < 5; i++) {
			cor[i] = cor[i+1];
		}
		fim--;
	}
	system("cls");
}

void limpar(){
	if (ini == fim) {
		val1 = 3;
	}
	else {
		int i;
		for (i = 0; i < 5; i++) {
			cor[i] = cor[i-1];
		}
		fim--;
	}
	system("cls");
	printf("\nFila vazia!\n\n");
}

void imprimir(){
	int j;
	system("cls");
	printf("-------------------------------------------------------------------------------------------\n");
	for(j = 0; j < 5; j++){
		printf(" %i° correção -> ", j + 1);
		printf(" R.A do aluno: %i | ", cor[j].ra_);
		printf(" Nome do arquivo: %s | ", cor[j].nome_);
		printf(" Extenção do arquivo: %s | ", cor[j].ext_);
		printf(" Matrícula do professor: %i |\n-------------------------------------------------------------------------------------------\n", cor[j].mat_);
	}
}

void imprimir2(){
	int j;
	system("cls");
	printf("\n----------------------\n");
	for(j = 0; j < 5; j++){
		printf(" %i° correção ->\n\n", j + 1);
		printf(" R.A do aluno: %i\n", cor[j].ra_);
		printf(" Nome do arquivo: %s\n", cor[j].nome_);
		printf(" Extenção do arquivo: %s\n", cor[j].ext_);
		printf(" Matrícula do professor: %i\n----------------------\n", cor[j].mat_);
	}
}

void imprimir3(){
	printf("=================================\n");
	printf(" %i° correção ->\n\n", 0 + 1);
	printf(" R.A do aluno: %i\n", cor[0].ra_);
	printf(" Nome do arquivo: %s\n", cor[0].nome_);
	printf(" Extenção do arquivo: %s\n", cor[0].ext_);
	printf(" Matrícula do professor: %i\n=================================\n", cor[0].mat_);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int val0 = 0;
	int val;
	int val4 = 2;
	while(val0 == 0){
		if(val4 == 2){
			system("cls");
			imprimir3();
		}else{
			if(val4 == 1){
			imprimir();
			}else{
				imprimir2();
			}
		}
		printf("\n 00 - Alterar forma da fila\n");
		printf(" 11 - Visualização padrão\n");
		printf("\n 1 - Inserir elemento na fila\n");
		printf(" 2 - Remover elemento da fila\n");
		printf(" 3 - Esvaziar a fila\n");
		printf(" 4 - Encerrar o programa\n\n>>> ");
		switch(val1){
			case 1 :
				printf(" Valor inválido! Digite novamente!\n\n>>> ");
				val1 = 0;
				break;
			case 2 :
				printf(" A fila está cheia!\n\n>>>");
				val1 = 0;
				break;
			case 3 :
				printf("Fila vazia!\n\n>>>");
				val1 = 0;
				break;
		}
		scanf("%i", &val);
		switch (val){
			case 1 :
				enfileirar();
				break;
			case 2 :
				desenfileirar();
				break;
			case 3 :
				limpar();
				break;
			case 4 :
				val0 = 1;
				break;
			case 00 :
				if(val4 == 0){
					val4 = 1;
				}else{
					val4 = 0;
				}
				break;
			case 11 :
				val4 = 2;
				break;
			default :
				system("cls");
				val1 = 1;
		}
	}
}
