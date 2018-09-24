#include <stdio.h>
#include <conio.h>

int main() 
{
	char* filename = "test.txt";
	int exist = cfileexist(filename);
	if (exist)
		printf("File %s exist", filename);
	else
		printf("File %s doesnt exist", filename);
	
	FILE* fpointer = fopen(filename, "r");
	int iter = 0;
	int count = 0;
	for(; fscanf(fpointer, "%d", &iter) && !feof(fpointer);)
		//printf("%d ", iter);
		count += 1;
	printf("Number if elements in file %d ", count);
	fclose(fpointer);
	

    int a[100],i,count = n,j,t;
    
    for (i=0; i<(n-1); i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (*(a+i)>*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
    printf("Sorted array (ascending) is:\n");
    for (i=0; i<n; i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
}
	
	
	getch();
	return 0;

