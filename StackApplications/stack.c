#include <stdio.h>
#define MAX 100

typedef struct stack {
    int arr[MAX];
    int top;  
 } stk;

void push(stk *s,int value) {
    if (s->top+1 == MAX) {
        printf("Stack Overflow\n");
    }
    else {
        s->top++;
        s->arr[s->top] = value;
        printf("Inserted %d at %d\n",value,s->top);
    }
}

int pop(stk *s) {
    int temp;
    if (s->top == -1) {
        printf("Stack is empty");
        return 0;
    }
    else {
        temp = s->arr[s->top];
        s->top--;
        return temp;
    }
}

void print(stk *s) {
    int i;
    for (i=0;i<=s->top;i++) {
        printf("%d ",s->arr[i]);
    }
}

int main() {
    stk st1;
    int popped;
    st1.top = -1;
    printf("%d\n",st1.top);
    push(&st1,1);
    push(&st1,2);
    push(&st1,3);
    push(&st1,4);
    push(&st1,5);
    print(&st1);
    popped=pop(&st1);
    printf("\nPopped: %d\n",popped);
    print(&st1);

}
