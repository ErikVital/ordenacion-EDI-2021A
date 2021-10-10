//Vital Muñoz Erik
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 30

void seleccion(int A[N]);
void Intercambiador(int *a, int *b);
void Genera(int A[N]);
void Printea(int A[N]);

int main()
{	
	int A[N];
    Genera(A);
    //Printea(A);
    seleccion(A);
    //Printea(A);
    
	return 0;
}

void seleccion(int A[N])
{
    int p,cont,mayor;

    for(p=0; p<N-1; p++)
    {
        mayor=0;
        for(cont=1; cont <N-p;cont++)
        {
            if(A[cont]>A[mayor])
            {
                mayor=cont;
            }
        }
        Intercambiador(&A[mayor],&A[N-p-1]);
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
