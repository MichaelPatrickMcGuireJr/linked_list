/*
 *   Author:  Michael McGuire
 *  Purpose:  linked-lists are a technique used in c-code to store data in an organized manner
 * Language:  c
 */

// headers
#include <stdio.h>
#include <stdlib.h>

// our linked list structure
struct Node {
    // the data stored at this node
    int data;

    // a pointer to the next node of our linked list
    struct Node* next;
};

// this function loops through each node, printing the integer value to the console
void printList(struct Node* n)
{
    // proceed through the corresponding set of nodes until the last node where a NULL is stored as the *next
    while (n != NULL) {
        // print data in this node
        printf( "data = %X\n",n->data );
        // change the pointer to the next node in linked-list
        n = n->next;
    }
}

int main()
{
	// initialize 3 empty node structures to NULL
    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // allocate chunks of memory of the correct size to the 3 nodes
    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // assign the first node a data value and assign the location of the next node
    first->data = 1;
    first->next = second;

    // assign the second node a data value and assign the location of the next node
	second->data = 2;
    second->next = third;

    // assign the third node a data value and indicate this to be the last node with the value NULL
    third->data = 3;
    third->next = NULL;

    // function to print the data for each node in the list starting at the first node
    printf("printing all members of linked list: \n");
  	printList(first);

    // exit main
    return 0;
}
