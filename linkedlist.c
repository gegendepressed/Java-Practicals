#include <stdio.h>
#include <stdlib.h>

typedef struct nodestr {
    int data;
    struct nodestr *next;
} node;

void printlist(node *headnode) {
    node *iter;
    iter = malloc(sizeof(node));
    iter = headnode->next;
    printf("[");
    while (iter != NULL) {
        printf("%d,",iter->data);
        iter=iter->next;
    }
    printf("]\n");
}

void insertatbeginning(node **head,int data) {
    node *n;
    n = malloc(sizeof(node));
    n->next = (*head)->next;
    n->data = data;
    (*head)->next = n;
}

void insertatend(node *head,int data) {
    node *n;
    n = malloc(sizeof(node));
    n->next = NULL;
    n->data = data;
    while (head->next != NULL)
        head = head->next;
    head->next = n;
}

int deleteendnode(node *head) {
    int val;
    while (head->next->next != NULL)
        head = head->next;
    val = head->next->data;
    head->next = NULL;
    return val;
}

void deletenodebyval(node *head, int query) {
    node *iter;
    iter = malloc(sizeof(node));
    iter = head;
    while (1) {
        if (iter->next->data == query) {
            iter->next = iter->next->next;
            break;
        }
        else if (iter==NULL) {
            printf("\nElement doesn't exist");
            break;
        }
        iter = iter->next;
    }
}

int main() {
    node *head,*n1,*n2;
    head = malloc(sizeof(node));
    n1 = malloc(sizeof(node));
    n2 = malloc(sizeof(node));
    head->next = n1;
    n1->data = 1;
    n1->next = n2;
    n2->data=2;
    n2->next=NULL;
    printlist(head);
    insertatbeginning(&head,3);
    insertatbeginning(&head,4);
    insertatend(head,7);
    printlist(head);
    printf("%d\n",deleteendnode(head));
    printlist(head);
    deletenodebyval(head,3);
    deletenodebyval(head,1);
    printlist(head);
    return 0;
}
