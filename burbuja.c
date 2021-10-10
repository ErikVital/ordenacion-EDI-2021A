//Vital Muñoz Erik

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 30

void Bubuja(int A[N]);
void Genera(int A[N]);
void Printea(int A[N]);

int main()
{
    int A[N];
    Genera(A);
    Printea(A);
    Bubuja(A);
    printf("\n");
    Printea(A);
	return 0;
}
/*
void Bubuja(int A[N])
{
    int cont, p, aux;

    for(p=0;p<N-1;p++) 
    {
        for(cont=p+1;cont<N;cont++)
        {
            if(A[p]>A[cont])
            {
                aux=A[p];
                A[p]=A[cont];
                A[cont]=aux;
                
            }
        }
        //Printea(A);
    }
}
*/
void Bubuja(int A[N])
{
    int aux, p, cont;

    for(p=1;p<N;p++)
    {
        for(cont=0;cont<N;cont++)
        {
            if(A[cont]>A[cont+1])
            {
                aux=A[cont];
                A[cont]=A[cont+1];
                A[cont+1]=aux;
            }
        }
    }
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
