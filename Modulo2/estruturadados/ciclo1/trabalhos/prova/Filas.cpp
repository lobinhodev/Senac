// Filas squenciais

//@author: Daniel Dantas
//@author: Daniel Bastos

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int filaVazia(int n)
{
	if (n == -1)
	{
		return 1;
	}
	return 0;
}

int filaCheia(int n)
{
	if (n == MAX)
	{
		return 1;
	}
	return 0;
}

void enfileirar(int *i, int *f, int *n, int valor, int *fila)
{
	if (filaCheia(*n))
	{
		printf("Fila cheia\n");
	}
	else
	{ // fila não está cheia
		if (*i == -1)
		{ // fila vazia
			*i = 0;
		}
		if (*f == MAX - 1)
		{
			*f = 0;
		}
		else
		{
			*f = *f + 1; //(*f)++;
		}
		fila[*f] = valor;
		*n = *n + 1; //(*n)++;

		printf("Enfileirado: %d\n", valor);
	}
}

void desenfileirar(int *i, int *f, int *n, int *fila)
{
	if (filaVazia(*n))
	{
		printf("Fila vazia\n");
	}
	else
	{ // fila não está vazia
		printf("Desenfileirado: %d\n", fila[*i]);
		if (*n == 1)
		{ // apenas um elemento na fila
			*i = -1;
			*f = -1;
		}
		else
		{ // mais de um elemento na fila
			if (*i == MAX - 1)
			{
				*i = 0;
			}
			else
			{
				*i = *i + 1; //(*i)++;
			}
		}
		*n = *n - 1; //(*n)--;
	}
}

void mostrarExtremos(int *i, int *f, int *n, int *fila)
{
	if (filaVazia(*n))
	{
		printf("Fila vazia\n");
	}
	else
	{ // fila não está vazia
		printf("Primeiro: %d\n", fila[*i]);
		printf("Ultimo: %d\n", fila[*f]);
	}
}

int exibirFila(int *fila, int *n)
{
	int i;
	for (i = 0; i < *n; i++)
	{
		printf("%d\n", fila[i]);
	}
	return 0;
}

// int inverteFila(int *fila, int *n){
// 	int i, aux;
// 	for(i = 0; i < *n / 2; i++){
// 		aux = fila[i];
// 		fila[i] = fila[*n - i - 1];
// 		fila[*n - i - 1] = aux;
// 	}
// 	return 0;
// }

int inverterFila(int *fila, int *n)
{
	if (filaVazia(*n))
	{
		printf("Fila vazia\n");
	}
	else
	{ // fila não está vazia
		inserePilha(fila, *n);
	}
}

int inserePilha(int *pilha, int *n, int valor)
{
	if (pilhaCheia(*n))
	{
		printf("Pilha cheia\n");
	}
	else
	{				 // pilha não está cheia
		*n = *n + 1; //(*n)++;
		pilha[*n] = valor;
	}
	return 0;
}

int emp

	int
	main()
{
	int fila[MAX];
	int n = 0;
	int i = -1;
	int f = -1;
	int opcao;

	do
	{
		printf("1 - Enfileirar\n");
		printf("2 - Desenfileirar\n");
		printf("3 - Imprimir fila\n");
		printf("4 - Inverter fila\n");
		printf("5 - Sair\n");
		printf("Digite sua opcao: ");
		scanf("%d", &opcao);

		switch (opcao)
		{
		case 1:
			int valor;
			printf("Digite o valor: ");
			scanf("%d", &valor);
			enfileirar(&i, &f, &n, valor, fila);
			break;
		case 2:
			desenfileirar(&i, &f, &n, fila);
			break;
		case 3:
			exibirFila(fila, &n);
			break;
		case 4:
			inverterFila(fila, &n);
		case 5:
			printf("Saindo...\n");
			break;
		default:
			printf("Opcao invalida\n");
		}
	} while (opcao != 5);

	return 0;
}
