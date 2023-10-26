/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  printf ("My first linked list program in c");

  // delacre node str.
  struct node
  {
    int data;
    struct node *link;
  };

  // node delecare
  struct node *first, *second, *third, *fourth, *fifth;

  // allcating memory
  first = malloc (sizeof (struct node));
  second = malloc (sizeof (struct node));
  third = malloc (sizeof (struct node));
  fourth = malloc (sizeof (struct node));
  fifth = malloc (sizeof (struct node));

  // data storing
  first->data = 10;
  second->data = 20;
  third->data = 30;
  fourth->data = 40;
  fifth->data = 50;

  //  position set
  first->link = second;
  second->link = third;
  third->link = fourth;
  fourth->link = fifth;
  fifth->link = NULL;

  struct node *head = first;

  // now display------------------------------------------------------------------

  // printf("\n the element are\n");
  // while(head!=NULL){
  //     printf("%d\n",head->data);
  //     head= head->link;
  // };

  // printf("null");


  // // this is the program of counting given linked list --------------------------

  // int count(){
  //     int count = 0;
  //     struct node *ptr;
  //     ptr = head;

  //     while(ptr!=NULL){  // condition means linked list is not null 
  //         count = count+1;
  //         ptr = ptr->link;
  //     };
  //     return count;
  // }
  // int box = count();
  // printf("\nthe number of node in the given linked list is  : %d", box);





  // //  given linked list , print the data of last node 

  // void lastdata(){
  //     struct node *ptr;
  //     ptr = head;
  //     while(ptr->link!=NULL){
  //         ptr = ptr->link;
  //     }
  //     printf("\n\nthe last data in node is %d",ptr->data);
  // }

  // lastdata();



  // // given linked list , print last second element

  // int lastsecondele(){
  //     struct node *ptr;
  //     ptr = head;
  //     if(ptr!=NULL||ptr->link!=NULL){
  //         while(ptr->link->link!=NULL){
  //             ptr = ptr->link;
  //         };

  //     };
  //         return ptr->data;
  // }

  // int lastsecondelement = lastsecondele();
  // printf("\nthe last second element of linked list is %d", lastsecondelement);





//   // searching the data in linked list 

//   void search (int num)
//   {
//     struct node *ptr = head;
//     if (ptr!=NULL)
//       {

//      while (ptr != NULL)
//        {
//          if (ptr->data == num)
//            {
//              printf ("\nthe number is present!!!");
//            }
//          ptr = ptr->link;
//        }
//       }
//     else
//       {
//          printf ("\nthe number is absent!!!");
//       }
//   }

//   search (41);







// // in given linked list , display alternate number

// void altdisplay(){
//     struct node *ptr = head;
//     while(ptr!=NULL && ptr->link!=NULL){
//         printf("\n%d",ptr->data);
//         ptr=ptr->link->link;
//     }
//     if(ptr->link==NULL){
//         printf("\n%d",ptr->data);
//     }
// }

// altdisplay();




// // insertion in the linked list 

// void inser_at_begin(struct node **head,int data){
//     struct node *ptr;
//     ptr = malloc(sizeof(struct node));

//     ptr->data = data;
//     ptr->link = *head;
//     *head = ptr;


//   }

// inser_at_begin(&head, 1);


//  printf("\n the element are\n");
//   while(head!=NULL){
//       printf("%d\n",head->data);
//       head= head->link;
//   };



// // insertion at last
// void inser_at_end(int data){
//     struct node *temp, *ptr;
//     temp = malloc(sizeof(struct node));

//     temp->data = data;
//     temp->link = NULL;

//     if(head == NULL){
//         head = temp;
//     }

//     ptr = head;

//     while(ptr->link!=NULL){
//         ptr = ptr->link;
//     }

//     ptr->link = temp;
// }

// inser_at_end(60);

// printf("\n the element are\n");
//   while(head!=NULL){
//       printf("%d\n",head->data);
//       head= head->link;
//   };



// // finding middle node of given linked list ------------- 

// int middlenode(){
//     struct node *slow , *fast;
//     slow = head;
//     fast = head;
//     if(head== NULL)
//      return -1;

//     while(fast!=NULL&& fast->link!=NULL){
//         slow = slow->link;
//         fast = fast->link->link;
//     }
//     return slow->data;
// }


// int middle = middlenode();

// printf("\n the element are\n");
//   while(head!=NULL){
//       printf("%d\n",head->data);
//       head= head->link;
// }
// printf("\nthe middle element of linked list is %d", middle);







// // deletion of linkedlist from begining
// void deletion_at_begin(){
//     struct node *ptr;
//     if(head==NULL)
//       printf("linked list is NULL");
//     else{
//     ptr = head;
//     head = head->link;
//     free(ptr);

//     }

// }


// // printf("\n the element before deletion\n");
// //   while(head!=NULL){
// //       printf("%d\n",head->data);
// //       head= head->link;
// // }

// deletion_at_begin();

// printf("\n the element after deletion\n");
//   while(head!=NULL){
//       printf("%d\n",head->data);
//       head= head->link;
// }




// //   deletion at end 

// void deletion_at_end(){
//     struct node *ptr;
//     ptr = head;
//     if(head == NULL)
//      return;

//     else if(ptr->link == NULL){
//         head == NULL;
//         free(ptr);
//     }

//     while(ptr->link->link!=NULL){
//         ptr= ptr->link;

//     }
//     free(ptr->link);
//     ptr->link = NULL;
// }

// deletion_at_end();
// printf("\n the element after deletion\n");
//   while(head!=NULL){
//       printf("%d\n",head->data);
//       head= head->link;
// }






// // Reverse the linked list 

//   void print (struct node *ptr)
//   {
//     if (ptr != NULL)
//       {
// 	print (ptr->link);	//recursion 
// 	printf ("\n%d", ptr->data);
//       }
//   }



//   print (head);






// reverse the linked list

void reverse(){
    struct node *pre,*current,*next;
    pre = NULL;
    current = head;
    if(head == NULL||head->link == NULL)
     return;
    
    while(current!=NULL){
        next = current->link;
        current->link = pre;
        pre = current;
        current = next;
    }
    // prinf("%d",pre->data);
    head = pre;

printf("\n the element reverse\n");
  while(head!=NULL){
      printf("%d\n",head->data);
      head= head->link;
}
}

reverse();

















  return 0;
}
