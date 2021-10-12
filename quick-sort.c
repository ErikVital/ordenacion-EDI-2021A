//Vital Muñoz Erik
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 100

void seleccion(int A[N]);
void Genera(int A[N]);
void Printea(int A[N]);

int main()
{
	int A[N];

    Genera(A);
    //Printea(A);
    quicksort(A,0,N-1);
    //Printea(A);

	return 0;
}

void quicksort(int A[N],int first,int last)
{
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(A[i]<=A[pivot]&&i<last)
            i++;
         while(A[j]>A[pivot])
            j--;
         if(i<j){
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
         }
      }

      temp=A[pivot];
      A[pivot]=A[j];
      A[j]=temp;
      quicksort(A,first,j-1);
      quicksort(A,j+1,last);

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
