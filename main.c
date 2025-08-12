#include <stdlib.h>
#include <stdio.h>
#include "CDLL.h"

int main() {

    struct Node* head = NULL;
    struct Node* tail = NULL;

    addToEnd(222, &head, &tail);
    addToFront(435, &head, &tail);
    addToFront(546, &head, &tail);
    addToFront(32, &head, &tail);
    addToFront(777, &head, &tail);
    addToEnd(9999, &head, &tail);

    printList(&head);

    removeFirst(&head, &tail);
    removeFirst(&head, &tail);
    removeFirst(&head, &tail);
    removeFirst(&head, &tail);
    removeFirst(&head, &tail);
    removeSlot(4, &head, &tail);
    insert(-1, 5555, &head, &tail);

    printList(&head);

    destroyList(&head, &tail);

    printList(&head);

    return 0;
}