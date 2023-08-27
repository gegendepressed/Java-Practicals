#include <stdio.h>
#define max 100
#include<stdlib.h>

int stack[max],top=-1;

int isempty() {
	if (top==-1)
	    return 1;
	else
	    return 0;
} 

int pop() {
    top--;
    return stack[top+1];
}

void print() {
    int i;
    printf("\n");
    if (isempty()) {
        printf("Stack underflow");
        exit(1);
    }
    else {
        while (!isempty())
            printf("%d",pop());
    }
}

void push(int n) {
    if (top+1==max) {
        printf("\nStack is full");
        exit(1);
    }
    else
        top++;
    stack[top]=n;
}

void dec2bin (int n)
{
    while (n!=0) {
        push(n%2);
        n/=2;
    }
} 

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    dec2bin(n);
    printf("Binary: ");
    print();
    return 0;
}

