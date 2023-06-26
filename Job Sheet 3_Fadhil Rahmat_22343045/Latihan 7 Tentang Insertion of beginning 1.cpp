#include <stdio.h> 
#include <stdlib.h> 
struct Node{ 
 int data; 
 struct Node *next; 
}; 
 
void push(struct Node** head_ref, int new_data){ 
struct Node* new_node = (struct Node*) malloc(sizeof(struct 
Node)); 
 new_node->data = new_data; 
 new_node->next = (*head_ref); 
 (*head_ref) = new_node; 
} 
 
void printList(struct Node *node) 
{ 
 while (node != NULL) 
{ 
 printf(" %d ", node->data); 
 node = node->next; 
 } 
} 
 
int main() 
{ 
 printf(" Nama\t: Fadhil Rahmat\n");
 printf(" Nim\t: 22343045\n");
 printf(" Makul\t: Pratikum Struktur Data\n\n");
 
 struct Node* head = NULL; 
 push(&head, 7); 
 push(&head, 1); 
 printf("\n Created Linked list is: "); 
 printList(head); 
 
 return 0; 
}

