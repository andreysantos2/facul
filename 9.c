#include<stdio.h>
#include<stdlib.h>

int main(){
    
	int poltronas[48], i, op, poltrona, livres = 48, lugar=0;
	
	for(i=0;i<48;i++){
		poltronas[i] = 0;
	}
	
	do{
		system("cls");
		printf("Selecione a opcao desejada:\n\n1 - Vender Passagem\n2 - Mostrar Mapa de Ocupacao\n3 - Encerrar\n\nOpcao:");
		scanf("%d", &op);
		switch(op){
			case 1:
				system("cls");
				printf("Vender Passagem\n\nDigite as informacoes relacionadas a poltrona:\n\n1 - Janela\n2 - Corredor\n\nOpcao:");
				scanf("%d", &op);
				switch(op){
					case 1: lugar = 0;
						break;
					case 2: lugar = 24;
						break;
				}
				printf("\n\nDigite o numero da poltrona:");
				scanf("%d", &poltrona);
				if(livres>0){
					if(lugar==0){
						if(poltronas[poltrona-1]==0){
							printf("\nVenda Efetivada!");
							poltronas[poltrona-1]=1;
							livres--;
						}else{
							printf("\nNao Disponivel para Venda!");
						}
				 	}else{
			 			if(poltronas[poltrona+lugar-1]==0){
							printf("\nVenda Efetivada!");
							poltronas[poltrona+lugar-1]=1;
							livres--;
						}else{
							printf("\nNao Disponivel para Venda!");
						}
					}
				}else{
					printf("\nOnibus Lotado!");
				}
				getch();
				break;
			case 2:
				system("cls");
				printf("Mostrar Mapa de Ocupacao\n\nJanela     Corredor");
				for(i=0;i<24;i++){
					if(poltronas[i]==0){
						printf("\n%d - Livre", i+1);
					}else{
						printf("\n%d - Ocupada", i+1);
					}
					if(poltronas[i+24]==0){
						printf("     %d - Livre", i+1);
					}else{
						printf("     %d - Ocupada", i+1);
					}
				}
				getch();
				break;
		}
	}while(op!=3);
    return 0;
}
