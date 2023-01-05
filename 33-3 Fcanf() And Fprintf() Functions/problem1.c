#include<stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile=fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("Not Found");
        return 0;
    }
    outputFile=fopen("output.txt", "w");

    int n, i;
    fscanf(inputFile, "%d", &n);
    int sum=0;
    for(i=0; i<n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }
    fprintf(outputFile, "sum-> %d",sum);

    return 0;
}