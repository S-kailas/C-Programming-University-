#include <stdio.h>

int main()
{
    FILE *pFile = fopen("output.txt","w");

    char story[]="Hi my name is kailas,Pursuing Btech from CET";
    if (pFile==NULL)
    {
        printf("Error opening the File\n");
    }

    fprintf(pFile,"%s",story);

    fclose(pFile);
}