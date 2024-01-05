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


//add functionality
//Hit the end of the list and then add
LinkedList* add(LinkedList* list, int num){
    Node* ins = (Node*) malloc(sizeof(Node));
    ins->val = num;
    if (list->firstNode == NULL) {
        list->firstNode = ins;
        ins->next = NULL;
    }
    else{
        while ()
    }
}




int main() {
    LinkedList* list = init();
    //functionalities I need to add:
    //add
    // - iterate through the list til I fall off of it and hit null, then insert new node at the ending null value
    //delete
    // - iterate through til I hit a certain value, I need to remove and then point the previous node to the next node
    //get
    //- iterate through and see if any nodes equal the target node value, then return the index
    //contains
    // - return bool, iterate through to see if target val equals any of the nodes. all runtime will be O(n)


    return 0;
}

