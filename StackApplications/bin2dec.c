#include <stdio.h>
#define max 10
#include<stdlib.h>
#include<math.h>

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

int bin2dec(int b) {
    int i,temp,num=0;
    while (b!=0) {
        push(b%10);
        b/=10;
    }
    i=top;
    while (!isempty()) {
        temp=pop();
        if (temp==1) {
            num=num+pow(2,i);
        }
        i--;
    }
    return num;
}

int main() {
    int n,ans;
    printf("Enter no. in binary: ");
    scanf("%d",&n);
    ans=bin2dec(n);
    printf("%d",ans);
    return 0;
}

