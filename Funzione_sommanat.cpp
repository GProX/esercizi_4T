//funzione sonna n numeri naturali

#include <stdio.h>
int sommatoria(int somma, int n);
int main()
{
	int n;
	printf("Inserire un numero naturale\n");
	scanf("%d",&n);
	fflush(stdin);
	if (n>=0)
	{
		int somma=sommatoria(somma,n);
		printf("La somma e'%d\n",somma);
	}else
	{
		printf("Numero non valido\n");
	}
	getchar();
	return 0;
}
int sommatoria(int somma, int n)
{
	while (n>0)
	{
		somma=somma+n;
		n--;
	}
	return somma;
}
