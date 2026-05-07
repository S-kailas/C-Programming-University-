#include <stdio.h>
#include <string.h>
struct car
{
char model[20];
int year;
};
void printstruct()
{
    
}
int main()
{
    struct car cars[]={{"waganor",2019},{"swift",2023},{"etios",2020}};
    
    cars[1].year=2025;

    for (int i=0;i<3;i++)
    {
        printf("model:%s and year:%d \n",cars[i].model,cars[i].year);
    }
    
}
