//Vital Muñoz Erik
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

void Insertion(int A[N]);
void Intercambiador(int *a, int *b);
void Genera(int A[N]);
void Printea(int A[N]);

int main()
{
	int A[N];
    Genera(A);
    //Printea(A);
    Insertion(A);
    //Printea(A);

	return 0;
}

void Insertion(int A[N])
{
    int cont, p;

    for(p=1;p<N;p++) 
    {
        for(cont=p;cont>0 && A[cont]<A[cont-1];cont--)
        {
            Intercambiador(&A[cont], &A[cont-1]);
        }
        //Printea(A);
    }
}

void Intercambiador(int *a, int *b)
{
	int aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
}


void Printea(int A[N])
{
	int i;
   for(i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

void Genera(int A[N])
{
	int i;
    for(i=0;i<N;i++)
    {
        A[i]=rand()%100;
    }
}
