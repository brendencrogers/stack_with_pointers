#include "stack.c"

int main(){

    int mode = 0;
    int count = 0;

    printf("Welcome to the stack program.\n\n");

    for(;;)
    {
        char key;
        printf("Enter option: ");
        scanf("%c", &key);

        if (key == 'u') {
            int num;
            printf("What number? ");
            scanf("%d", &num);
            if (push(num) == 1) {
                printf("Overflow!!");
            }      
            printstack(mode);
            printf("\n");
        }

        else if (key == 'o'){
            int popped;
            int *val = &popped;
            if (pop(val) == 1) {
                printf("Underflow!!\n");
            }
            else{
                printf("Popped %d\n", popped); /* Adjust to mode */
            }
            printstack(mode);
            printf("\n");
        }
        else if (key == 'h'){
            mode = 1;
            printstack(mode);
            printf("\n");
        }
        else if (key == 'c'){
            mode = 2;
            printstack(mode);
            printf("\n");
        }
        else if (key == 'd'){
            mode = 0;
            printstack(mode);
            printf("\n");
        }
        else if (key == 'x'){
            printf("Goodbye!\n");
            return 0;
        }

    }

}