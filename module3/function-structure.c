#include <stdio.h>

struct student {
    int rollno;
    char name[100];
    int mark;
};

void printstruct(struct student s)
{
    printf("Roll No %d .Name %s Mark %d\n",s.rollno,s.name,s.mark);
}

int main()
{
    struct student student1={62,"kaials",35};
    struct student student2={64,"John Marin",39};

    printstruct(student1);
}