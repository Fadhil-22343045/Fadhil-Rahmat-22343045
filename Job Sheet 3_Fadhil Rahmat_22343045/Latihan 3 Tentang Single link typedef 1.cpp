#include <stdio.h> 
#include <stdlib.h> 
 
struct LinkedList {
 int data;
 struct LinkedList *next;
};
typedef struct LinkedList node;
 
node *head = NULL; 
node *second = NULL; 
node *third = NULL; 

int main() 
{
 printf(" Nama\t: Fadhil Rahmat\n");
 printf(" Nim\t: 22343045\n");
 printf(" Makul\t: Pratikum Struktur Data\n\n"); 
 
 head = (node*)malloc(sizeof(node)); 
 second = (node*)malloc(sizeof(node)); 
 third = (node*)malloc(sizeof(node)); 
 
 head->data = 1;
 head->next = second;
 second->data = 2;
 second->next = third;
 
 third->data = 3;
 third->next = NULL;

 printf("%d ", head->data); 
 printf("\n%d ", second->data);
 printf("\n%d ", third->data);
 
 
 return 0; 
}
