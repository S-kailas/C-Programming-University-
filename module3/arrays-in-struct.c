#include <stdio.h>
#include <string.h>
struct book
{
    char title[100];
    char author[50];
    int price;
};

//book display
void displaybook(int i,struct book books[])
{
    printf("Title:%s Author:%s Price:Rs.%d \n",books[i].title,books[i].author,books[i].price);
}

//book Insertion
void insertbook(int *n,struct book books[],char title[],char author[],int price)
{
    books[*n].price=price;
    strcpy(books[*n].title,title);
    strcpy(books[*n].author,author);
    (*n)++;
}
int main()
{
    struct book books[100];

    int len=0;
    int *n=&len;
//////&len is the memory location of len , and the value is getting assigned to n , *n takes out the value from that memory location
    insertbook(n,books,"The alchemist","Paulo Coelho",780);
    insertbook(n,books,"Power Of Money","Abraham Johanson",350);
    insertbook(n,books,"Atomic Habits","James Clear",550);
    insertbook(n,books,"Phsycology of Money","Morgan Housel",460);

    for (int i=0;i<len;i++)
    {
        displaybook(i,books);
    }
}