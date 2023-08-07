#include <stdio.h>
#define MAX 5

typedef struct queuestr {
    int data[MAX];
    int start;
    int top;
} queue;

int isempty(queue *q) {
    if (q->start == -1)
        return 1;
    return 0;
}

int isfull(queue *q) {
    if((q->start == 0 && q->top+1 == MAX) || (q->top+1 == q->start))
        return 1;
    else
        return 0;
}

int enqueue(queue *q,int num) {
    if (isfull(q)) {
        printf("\nQueue is full");
        return 0;
    }
    if (q->start==-1) {
        q->start=0;
        q->top=0;
    }
    else if (q->top+1==MAX)
        q->top=0;
    else
        q->top++;
    q->data[q->top] = num;
    return 1;
}

int dequeue(queue *q) {
    int returnval;
    if (isempty(q)) {
        printf("\nQueue is empty");
        return 0;
    }
    returnval=q->data[q->start];
    //printf("\ndequeuelog: s: %d t: %d",q->start,q->top);
    if ((q->start+1 == q->top) || (q->start==0 && q->top==0)) {
        q->start=-1;
        q->top=-1;
    }
    else if (q->start+1==MAX)
        q->start = 0;
    else
        q->start++;
    return returnval;
}

void printqueue(queue *q) {
    int i;
    //printf("\nRaw: [");
    //for (i=0;i<MAX;i++) {
    //    printf("%d ",q->data[i]);
    //}
    printf("\n");
    i = q->start;
    while (1) {
        printf("%d ",q->data[i]);
        if (i==q->top)
            break;
        if (i==MAX-1)
            i=0;
        else
            i++;
    }
}

int main() {
    queue q;
    q.start=-1;
    q.top=-1;
    enqueue(&q,1);
    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,5);
    printqueue(&q);
    printf("\nDequeued: %d",dequeue(&q));
    printqueue(&q);
    enqueue(&q,6);
    printqueue(&q);
    printf("\nDequeued: %d",dequeue(&q));
    printf("\nDequeued: %d",dequeue(&q));
    printf("\nDequeued: %d",dequeue(&q));
    printf("\nDequeued: %d",dequeue(&q));
    printf("\nDequeued: %d",dequeue(&q));
    printf("\nDequeued: %d",dequeue(&q));
    printqueue(&q);
    enqueue(&q,8);
    printqueue(&q);
}
