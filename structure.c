
#include<stdio.h>
struct book
{
    int book;
    int price; 
    int pages;
    int id;
}bk1;
int main()
{
    printf("enter the price of book");
    scanf("%d",&bk1.book);
    printf("enter the page of book ");
    scanf("%d",&bk1.price);
    printf("enter the id");
    scanf("%d",&bk1.id);
    return 0;
}