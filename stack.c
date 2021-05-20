#include "stack.h"
#include <stdio.h>

/*
int main(void)
{
    p1 = &stack[9] + 20;
    push(4);
    push(5);
    push(6);
    printf("%i\n", stack[top]);
    pop(p1);
    printf("%i\n", stack[top]);
    printf("%i\n", *p1);
}
*/

int push(int value){
    top += 1;
    if (top > 10){
        return 1;
    }
    else {
        stack[top] = value;
        return 0;
    }
}


int pop(int *value){
    if (top < 0){
        return 1;
    }
    else {
        *value = stack[top];
        top -= 1;
        return 0;
    }
}

void printstack(int format){
    int i;

    printf("Stack: ");

    if (format == 0){
        for (i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
    }
    else if (format == 1){
        for (i = 0; i <= top; i++){
            printf("%x ", stack[i]);
        }
    }
    else {
        for (i = 0; i <= top; i++){
            printf("%c ", stack[i]);
        }
    }
}