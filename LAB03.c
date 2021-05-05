/*
*******************   Grupo 1   *************************
Aluno1 Bruna Ciriaco Benedito............RA 1111392111021
Aluno2 Fernanda Gonçalves Lima...........RA 1111392111014
Aluno3 João Pedro Oliveira Gonçalves.....RA 1111392111045
Aluno4 Paulo Henrique Cardoso de Jesus...RA 1111392111018
Aluno5 Vicente Santos Gonçalves..........RA 1111392111035
*/
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <conio.h>

void imprimirObjetivoLab();
bool testarDivisibilidade(int dividendo, int divisor);
bool divisibilidade2(int num);
bool divisibilidade3(int num);
bool divisibilidade4(int num);
bool divisibilidade5(int num);
bool divisibilidade6(int num);
bool divisibilidade7(int num);
bool divisibilidade8(int num);
bool divisibilidade9(int num);
bool divisibilidade10(int num);
bool divisibilidade11(int num);
bool divisibilidade12(int num);
bool divisibilidade15(int num);
bool divisibilidade25(int num);

int main(void){
	setlocale(LC_ALL,"Portuguese");
	int x,y;
	char opcao;
	do{
	imprimirObjetivoLab();
	do{
		printf("\nInsira o valor do dividendo:");
		scanf("%d",&x);
		printf("\nInsira o valor do divisor:");
		scanf("%d",&y);
		if(y!=2 && y!=3 && y!=4 && y!=5 && y!=6 && y!=7 && y!=8 && y!=9 && y!=10 && y!=11 && y!=12 && y!=15 && y!=25){
			system("clear||cls");
			imprimirObjetivoLab();
			puts("\nDivisor invalido! Favor informar novos valores.");
		}		
	}while(y!=2 && y!=3 && y!=4 && y!=5 && y!=6 && y!=7 && y!=8 && y!=9 && y!=10 && y!=11 && y!=12 && y!=15 && y!=25);
	printf(testarDivisibilidade(x,y) ? "\n%d eh divisivel por %d\n" : "\n%d NAO eh divisivel por %d\n",x,y);
	puts("\nDeseja realizar novo teste (s/n)?");
	opcao = getche();
	if(opcao == 's'||opcao == 'S')
		system("clear||cls");
	do{
		if(opcao!='s' && opcao!='n' && opcao!='S' && opcao!='N'){
			puts("\nOpcao invalida! Deseja realizar novo teste (s/n)?");
			opcao = getche();
			if(opcao == 's'||opcao == 'S')
				system("clear||cls");
		}
	}while(opcao!='s' && opcao!='n' && opcao!='S' && opcao!='N');	
	}while(opcao == 's'||opcao == 'S');
	
	getch();
	return 0;  
}
void imprimirObjetivoLab(){
	puts("Programa TESTE DE DIVISIBILIDADE");
	puts("\nprograma tem por objetivo informar se um determinado numero eh ou nao divisivel por outro.\n");
	puts("Os testes de divisibilidade sao validos para os seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 e 25.");
}
bool testarDivisibilidade(int dividendo, int divisor){
	bool resp;
	switch(divisor){
		case 2 :
			resp = divisibilidade2(dividendo); 
		break;
		case 3 :
			resp = divisibilidade3(dividendo); 
		break;
		case 4 :
			resp = divisibilidade4(dividendo); 
		break;
		case 5 :
			resp = divisibilidade5(dividendo); 
		break;
		case 6 :
			resp = divisibilidade6(dividendo); 
		break;
		case 7 :
			resp = divisibilidade7(dividendo); 
		break;
		case 8 :
			resp = divisibilidade8(dividendo); 
		break;
		case 9 :
			resp = divisibilidade9(dividendo); 
		break;
		case 10 :
			resp = divisibilidade10(dividendo); 
		break;
		case 11 :
			resp = divisibilidade11(dividendo); 
		break;
		case 12 :
			resp = divisibilidade12(dividendo); 
		break;
		case 15 :
			resp = divisibilidade15(dividendo); 
		break;
		case 25 :
			resp = divisibilidade25(dividendo);
		break;
		default :
			resp = false;	
	}
	return resp;
}
bool divisibilidade2(int num){
	bool resp;
	num = num%10;
	if(num==0 || num==2 || num==4 || num==6 || num==8)
		resp = true;
	else
		resp = false;
	return resp;
}
bool divisibilidade3(int num){
	bool resp;
	
	return resp;
}
bool divisibilidade4(int num){
	bool resp;
	if(divisibilidade2(num))
		if(divisibilidade2(num/2))
			resp = true;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade5(int num){
	bool resp;
	float calc;
	calc=num%10;
	if(calc==0 || calc==5)
		resp = true;
	else
		resp = false;
	return resp;
}
bool divisibilidade6(int num){
	bool resp;
	if(divisibilidade2(num))
		if(divisibilidade3(num))
			resp = true;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade7(int num){
	bool resp;
	
	return resp;
}
bool divisibilidade8(int num){
	bool resp;
	if(divisibilidade2(num))
		if(divisibilidade2(num/2))
			if(divisibilidade2(num/4))
				resp = true;
			else
				resp = false;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade9(int num){
	bool resp;
	if(divisibilidade3(num))
		if(divisibilidade3(num/3))
			resp = true;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade10(int num){
	bool resp;
	num = num%10;
	if(num==0)
		resp = true;
	else
		resp = false;
	return resp;
}
bool divisibilidade11(int num){
	bool resp;
	
	return resp;
}
bool divisibilidade12(int num){
	bool resp;
	if(divisibilidade3(num))
		if(divisibilidade4(num))
			resp = true;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade15(int num){
	bool resp;
	if(divisibilidade3(num))
		if(divisibilidade5(num))
			resp = true;
		else
			resp = false;	
	else
		resp = false;
	return resp;
}
bool divisibilidade25(int num){
	bool resp;
	if(divisibilidade5(num))
		if(divisibilidade5(num/5))
			resp = true;
		else
			resp = false;	
	else
		resp = false;	
	return resp;
}
