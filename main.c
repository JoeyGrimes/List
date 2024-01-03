#include <stdio.h>
#include <stdlib.h>


//representative of each element within the actual list itself
typedef struct Node{
    // this is CURRENTLY NULL POINTER
    struct Node *next;
    int val;
} Node;

//The List itself
typedef struct LinkedList {
    // first node in the actual list
    // this is CURRENTLY NULL POINTER
    struct Node *firstNode;
} LinkedList;


//set the first node to 0 and return the list
LinkedList* init(){
//malloc the memory and make a pointer to the list
// cast the malloc pointer to a LinkedList pointer
// set the firstNode to be Null
//return the listpointer
    LinkedList* ptrList = (LinkedList*)malloc(sizeof(LinkedList));
    ptrList->firstNode = NULL;
    return ptrList;

}

int main() {
    LinkedList* list = init();



    return 0;
}

