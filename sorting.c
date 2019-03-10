#include <stdio.h>
#include <time.h>
#include <stdlib.h>

double  bblsort(int a[], int size)
{
	int j, t, i;
	clock_t start, stop;
	start = clock();

	for (j=size-1; j>0; j--)
	{
		for(i=0; i<j; i++)
		{
			if (a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	stop = clock();
	double time = ((double)(stop-start)/CLOCKS_PER_SEC);
	return time;
}

double countsort(int a[]; int size)
(
	int i, j;
	int max = a[0];
	clock_t start, stop;
	start = clock();
	for(i=0; i<size; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}

	max++;

	int add[size];	     //религия
	for(i=0; i<max; i++) //православие
	{
		add[i]=0;
	}
	for(i=0; i<=max; i++)
	{
		add[a[i]]++;
	}

	for(i=0; i<=max; i++)
	{
		for(j=0; j<arr[i]; j++)
		{
			*(a++)=i;
		}
	}
	stop = clock()
	double time = ((double)(stop-start)/CLOCKS_PER_SEC);
	return time;
}

int main()
{
	int choice, size;
	printf("input array size");
	scanf("%d", &size);
	int a[size];
	int vitalik;
	srand(time(NULL));
	for(vitalik=0; vitalik<size; vitalik++)
	{
		a[vitalik]=rand()%1000;
	}
	printf("1 executes bubblesort\n2 executes countingsort");
	scanf("%d", &choice);
	if (choice==1)
	{
		double result=bblsort(a[], size);
	}
	if (choice==2)
	{
		double result=countsort(a[], size);
	}
	else goto valya;
	printf ("sorting required %e time", result);
	valya:
	return 0;
}
