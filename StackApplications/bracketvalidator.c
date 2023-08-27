#include <stdio.h>
#define MAX 100
#include <string.h>

typedef struct stack {
    char arr[MAX];
    int top;
 } stk;

void push(stk *s,char value) {
    if (s->top+1 == MAX) {
        printf("\nStack Overflow\n");
    }
    else {
        s->top++;
        s->arr[s->top] = value;
        //printf("\nInserted %d at %d\n",value,s->top);
    }
}

int isempty(stk *s) {
    if (s->top == -1)
        return 1;
    return 0;
}

char pop(stk *s) {
    char temp;
    if (isempty(s) == 1) {
        printf("\nStack is empty");
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
    printf("\n<");
    for (i=0;i<=s->top;i++) {
        printf("%c ",s->arr[i]);
    }
}

int match_brac(char a,char b) {
    if (a == '{' && b == '}')
        return 1;
    else if (a == '[' && b == ']')
        return 1;
    else if (a == '(' && b == ')')
        return 1;
    else
        return 0;
}

int validateexp(stk *s,char *exp) {
    char temp,val;
    int i;
    for (i=0;i<strlen(exp);i++) {
        val = exp[i];
        if (val == '(' || val == '[' || val == '{')
            push(s,val);
        else if (val == ')' || val == ']' || val == '}') {
            if (isempty(s)) {
                printf("\nError: Right brackets are more thab left brackets");
                return 0;
            }
            else {
                temp = pop(s);
                if (!match_brac(temp,val)) {
                    printf("\nError: Mismatched brackets");
                    return 0;
                }
            }
        }
    }

    if (!isempty(s)) {
        printf("\nError: Left brackets are more than right brackets");
        return 0;
    }
    else {
        printf("\nExperession is valid");
        return 1;
    }
}

int main() {
    stk st1;
    char exp[MAX];
    st1.top = -1;
    printf("Enter Expression: \n");
    fgets(exp,MAX,stdin);
    validateexp(&st1,exp);
}
