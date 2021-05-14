/*
*******************   Grupo 1   *************************
Aluno1 Bruna Ciriaco Benedito............RA 1111392111021
Aluno2 Fernanda Gon�alves Lima...........RA 1111392111014
Aluno3 Jo�o Pedro Oliveira Gon�alves.....RA 1111392111045
Aluno4 Paulo Henrique Cardoso de Jesus...RA 1111392111018
Aluno5 Vicente Santos Gon�alves..........RA 1111392111035
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

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
			puts("\nDivisor inv�lido! Favor informar novos valores.");
		}		
	}while(y!=2 && y!=3 && y!=4 && y!=5 && y!=6 && y!=7 && y!=8 && y!=9 && y!=10 && y!=11 && y!=12 && y!=15 && y!=25);
	printf(testarDivisibilidade(x,y) ? "\n%d � divisivel por %d\n" : "\n%d N�o � divisivel por %d\n",x,y);
	puts("\nDeseja realizar novo teste (s/n)?");
	opcao = getche();
	if(opcao == 's'||opcao == 'S')
		system("clear||cls");
	do{
		if(opcao!='s' && opcao!='n' && opcao!='S' && opcao!='N'){
			puts("\nOpc�o inv�lida! Deseja realizar novo teste (s/n)?");
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
	puts("PROGRAMA TESTE DE DIVISIBILIDADE");
	puts("\nPrograma tem por objetivo informar se um determinado n�mero � ou n�o divisivel por outro.\n");
	puts("Os testes de divisibilidade s�o v�lidos para os seguintes divisores: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 15 e 25.");
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
	bool resp, z = true;
	int x = num;
	int soma;
	while(z){
		while(x!=0){
			soma += x%10; 
			x = x/10;
		}
		if((soma/10)<1){
			z = false;
			if(soma == 3 || soma ==6 || soma==9)
				resp = true;
			else
				resp = false;	
		}
		else if((soma/10)>=1)
			x=soma;
			soma=0;
	}
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
	int u, x = num;
	while(x>70){
		u = (x%10)*2;
		x = x/10;
		x = fabs(x-u);
	}
	if(x==0 || x==7 || x==14 || x==21 || x==28 || x==35 || x==42 || x==49 || x==54 || x==63 || x==70)
		resp = true;	
	else
		resp = false;
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
	int x;
	int par=0;
	int impar=0;
	while(num!=0){
		impar = impar + num%10; 
		num = num/10;
		par = par + num%10; 
		num = num/10; 			
	}
	x = fabs(impar-par);
	if(x==0)
		resp = true;
	else
		resp = false;
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
