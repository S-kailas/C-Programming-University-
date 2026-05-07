#include <stdio.h>
#include <string.h>

int main()
{
    char name[10]="b";
    char word[12]="a";
    //string-compare
    //strcmp()
    float num=strcmp(word,name);
    printf("compared value:%f",num);

    //alphabetical order is being compared
    /*
    0 → equal
    < 0 → first smaller
    > 0 → first larger
    */
}