#include <stdio.h>
#include <stdlib.h>

#include "loop.h"

//Created by Mitchell Shelton
//Modified by <you>

//given a list determine if that list has a loop in it.

//eg 5->4->7->X does not have a loop
//eg 5->4->7->4 does have a loop (7 points back to 4)

//return 0 if no loop
//return 1 if there is a loop
int hasloop(struct node *first) {
    //TODO implement this function
    
    return 0;
}

struct node *createNode(int val) {
    struct node *n = malloc(sizeof(struct node));
    n->val = val;
    n->next = NULL;
    return n;
}

struct node *append(struct node *first, int val) {

    struct node *n = createNode(val);
    if (first == NULL) {
        first = n;
    } else {
        struct node *curr = first;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = n;
    }
    return first;

}

void deletelist(struct node *first) {

    struct node *curr = first;
    while (curr != NULL) {
        struct node *next = curr->next;
        free(curr);
        curr = next;
    }

}
