#include<stdio.h>

int main()
{
    FILE *logFile=fopen("log.txt","a");
    FILE *inputFile=fopen("input.txt","r");
    if (inputFile==NULL)
    {
        fprintf(logFile, "input fille not found at 3.22 PM\n");
    }
    
    
    return 0;
    return 0;
}