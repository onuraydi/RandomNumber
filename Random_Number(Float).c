#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 50

//Write a C program that generates 50 random numbers between -0.5 and 0.5 and writes them to the file rand.dat. 
//The first line of ran.dat contains the number of random numbers, while the next 50 lines contain 50 random numbers.

int main()
{
	float RandomNumber;
	int i;
	FILE * File;
	
	File = fopen("rand.dat","w");  
	
	fprintf(File,"Random Number Quantity: %d\n",N);
	
	srand(time(NULL));  
	
	fprintf(File,"Random Numbers: ");
	for(i = 0; i < N; i++)
	{
		RandomNumber = ((float)rand() / RAND_MAX) - 0.5;
		fprintf(File," (%.2f) - ",RandomNumber);
	}
	
	fclose(File);
	
	return 0;
}
