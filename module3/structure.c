#include <stdio.h>

struct student{char name[100]; int rollno; float grade;};



int main()
{
    struct student student1={"kailas",62,8.66};
    struct student student2={"Tawfiq",65,10};
    struct student student3={"Abhishek",60,8.5};


    printf("%s",student1.name);
}