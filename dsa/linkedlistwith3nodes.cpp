#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

int main(){
    struct node * first = NULL;
    struct node * second = NULL;
    struct node * third = NULL;
 
first =(struct node *) malloc( sizeof(struct node));
second =(struct node *) malloc( sizeof(struct node));
third = (struct node *) malloc( sizeof(struct node));
// printf(first);
return 0 ;
}