#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>

void GravarLog (char s[])
{
	FILE *fp;
	char tempo [9];

	fp = fopen("Log.txt", "a+t");

	_strdate(tempo);
	fprintf(fp, "%s ", tempo);

	_strtime(tempo);	
	fprintf(fp, "%s	", tempo);

	fprintf(fp, "%s", s);

	fprintf(fp, "\n");

	fclose(fp);
}

void SalvarStringEmArquivo ()
{
	char ch, nome[12], nomearquivo[16],	textolog[40] = "Salvar String em Arquivo ";
	FILE *fp;

	system("cls");
	printf("Salvando String em Arquivo .txt\n\n");
	puts("Digite o nome do arquivo texto para salvar a string:");
	gets(nome);

	strcpy(nomearquivo,nome);
	strcat(nomearquivo,".txt");
	
	fp = fopen(nomearquivo,"wt");
	
	printf("\n\nDigite o conteúdo do arquivo ou ");
	printf("aperte Esc para cancelar:\n\n");
	while(1)
	{
    	ch = getch();
    	if (ch==13) {break;}
    	if (ch==27) {break;}
		fprintf(fp, "%c", ch);
		printf("%c", ch);
	}
	
	fclose(fp);
	
	if(ch!=27)
	{
		strcat (textolog,nomearquivo);
		GravarLog(textolog);
		
		printf("\n\nArquivo salvo como %s", nomearquivo);
	}
	else {remove(nomearquivo);}
}

void Substituir (char nomearquivo[])
{
	char busca[32], substituir[32], ch;
	int letrasencontradas=0, tamanhobusca, tamanhosubstituir,quebra=0;
	int buscasencontradas=0, mudar, indice, sair;
	
	FILE *fp, *gj;
	
	printf("Digite o que deseja buscar: ");
	gets(busca);
	tamanhobusca = strlen(busca);
	
	printf("Digite pelo que deseja substituir: ");
	gets(substituir);
	tamanhosubstituir = strlen(substituir);
	
	fp=fopen(nomearquivo, "r+");
	gj=fopen("temp.txt", "w+t");
	
	ch=getc(fp);
	while(quebra==0)
	{	
		if(ch==EOF) {quebra=1;}
		
		if (ch != busca[letrasencontradas] && quebra != 1)	
		{
			fseek(fp,-1, SEEK_CUR);
			ch=getc(fp);	
			fprintf(gj, "%c", ch);
			
			letrasencontradas=0;
		}
		else
		{
			if(ch!=EOF) {letrasencontradas++;}
		}
		
		if (letrasencontradas==tamanhobusca)
		{
			buscasencontradas++;
			
			sair=0;
			do
			{
				printf("\n\nBusca encontrada, deseja substitiur sua %da aparição?", buscasencontradas);
				printf("\nDigite '1' para 'sim' ou '2' para 'não'");
				mudar = getch();
				switch (mudar)
				{
					case 49:	// 1
						for(indice=0;indice<tamanhosubstituir;indice++)
						{
							fprintf(gj, "%c", substituir[indice]);
						}
					
						letrasencontradas=0;
						sair=1;
						break;
					
					case 50:	//2
						sair=2;
						fseek(fp,-letrasencontradas, SEEK_CUR);
						for(;letrasencontradas>0;letrasencontradas--)
						{
							ch=getc(fp);	
							fprintf(gj, "%c", ch);
						}
						break;
					
					default:
						printf("\nOpção inválida");
				}
			} while (sair==0);
		}
	
		if(quebra==1)
		{
			fseek(fp,-letrasencontradas, SEEK_CUR);
			for(;letrasencontradas>0;letrasencontradas--)
			{
				ch=getc(fp);	
				fprintf(gj, "%c", ch);
			}
		}
	
		if(quebra==0){ch = getc(fp);}
	}

	fclose(fp);
	fclose(gj);
		
	remove(nomearquivo);
	rename ("temp.txt", nomearquivo);
}

void Criptografia(char arquivo[])
{
	char conteudo[141], chave[128], ch;
	int indice, modulo, tamanho, flag=1;
	FILE *fp;
	
	fp = fopen(arquivo, "r+");
	
	ch = getc(fp);
	for(tamanho = 0; !feof(fp); tamanho++)
	{	
		conteudo[tamanho] = ch;
		ch = getc(fp);
	}

	system("cls");
	printf("Criptografar/Descriptografar arquivo\n\n");
	printf("Escreva 'voltar' para retornar ao menu anterior\n");
	printf("\nDigite a chave de codificação/decodificação:");

	gets(chave);
	if (strcmp(chave,"voltar")==0) {flag=0;}	
		
	if(flag==1)
	{
		rewind(fp);
			
		printf("gravando:\n");	
		
		for(indice = 0; indice <= (tamanho-1); indice++)
		{
			modulo = indice % (strlen(chave));
			if (conteudo[indice]!=chave[modulo]) {conteudo[indice] ^= chave[modulo];}
			fprintf(fp, "%c", conteudo[indice]);
			printf("%c", conteudo[indice]);
		}
	}
	
	fclose(fp);
}

void ModificarArquivo ()
{
	char nome[16], textolog[34] = "Modificar Arquivo ", chave[128], conteudo[141], ch;
	int menu=1, opcao, indice;
	FILE *fp;

	while(1)
	{
		system("cls");
		printf("Escreva 'voltar' para retornar ao menu anterior\n");
		printf("\nDigite o nome do arquivo que deseja modificar: ");
		gets(nome);
		if (strcmp(nome,"voltar")==0) {menu=0; break;}
		fp=fopen(nome,"r+");

		if (fp==NULL) perror ("\nErro ao abrir arquivo");
		else {fclose(fp); break;}
	}

	if(menu==1)
	{
		strcat(textolog,nome);
		GravarLog (textolog);
	}

	while(menu)
	{
		system("cls");
		printf("Modificar Arquivo %s\n\n", nome);
		printf("Opções disponíveis:\n");
		printf("a. Localizar e substituir\n");
		printf("b. Criptografar texto\n");
		printf("c. Descriptografar o texto\n");
		printf("\n");

		fp=fopen(nome,"r+");

		printf("Conteudo original:\n\n");
		ch = getc(fp);
		for(indice = 0; !feof(fp); indice++)
		{	
			printf("%c", ch);
			ch = getc(fp);
		}
		printf("\n\nPressione Esc para sair\n\n");

		fclose(fp);
	
		opcao = getch();
		switch(opcao)
		{
			case 27:	//Esc
				printf("\n\n");
				menu=0;
				break;

			case 97:	//a
				Substituir(nome);
				break;

			case 98:	//b
				Criptografia(nome);
				break;

			case 99:	//c
				Criptografia(nome);
				break;

			default:
				printf("Opção inválida\n\n", opcao);
		}

		if (menu) {puts("\n\n"); system("PAUSE");}
	}
}

void MostrarLog ()
{
	FILE *fp;
	char letra;

	fp = fopen("Log.txt", "a+t");
	GravarLog ("Mostrar Arquivo de Log");

	system("cls");
	letra = getc(fp);
	while(!feof(fp))
	{
		putchar(letra);
		letra = getc(fp);
	}

	fclose(fp);
}

int main ()
{
	setlocale(LC_ALL, "portuguese");

	int menu=1,opcao;
	char senha[16];

	printf("Digite seu código de acesso: ");
	gets(senha);
	if(strcmp(senha,"AndreLawisch")!=0)
	{
		printf("Senha inválida\n");
		system("PAUSE");
		return 0;
	}
	GravarLog ("Usuário AndreLawisch iniciou o programa");

	while(menu==1)
	{
		system("cls");
		printf("Opções disponíveis:\n");
		printf("1. Ler uma string e salvar num arquivo texto\n");
		printf("2. Modificar um arquivo existente\n");
		printf("3. Ver arquivo de log\n");
		printf("\nPressione Esc para sair\n");
		printf("\n");

		opcao = getch();

		switch(opcao)
		{

			case 27:
				printf("\n\n");
				menu=0;
				break;

			case 49:
				SalvarStringEmArquivo();
				break;

			case 50:
				ModificarArquivo();
				break;

			case 51:
				MostrarLog();
				break;

			default:
				printf("%c Opção inválida\n\n", opcao);
		}

		if (menu && opcao!=50) {puts("\n\n"); system("PAUSE");}
	}
	
    return 0;
}
