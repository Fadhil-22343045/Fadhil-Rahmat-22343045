#include <stdio.h> 
#include <stdlib.h> 
 
struct node {
 int data;
 struct node *next;
};
 
int main() 
{ 
 printf(" Nama\t: Fadhil Rahmat\n");
 printf(" Nim\t: 22343045\n");
 printf(" Matkul\t: Pratikum Struktur Data\n\n");
 
 struct node* head = NULL; 
 struct node* second = NULL; 
 struct node* third = NULL; 
 
 head = (struct node*)malloc(sizeof(struct node)); 
 second = (struct node*)malloc(sizeof(struct node)); 
 third = (struct node*)malloc(sizeof(struct node)); 
 
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
