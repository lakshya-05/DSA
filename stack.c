#include<stdio.h>
int size=5, top=-1;
int a[5];

void insertion(){
    if(top==size-1){
        printf("\nOverflow\n");
    }
    else{
       top++;
       printf("\nEnter element to be inserted : ");
       scanf("%d", &a[top]);
    }
}

void deletion(){
    if(top==-1){
        printf("\nUnderflow\n");
    }
    else{
        top=top-1;
    }
}

void view(){
    int i;
    for(i=0; i<5; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int choice;
    //printf("Enter size: ");
    //scanf("%d", &size);

    while(1){

        printf("\nWelcome to this code for making a stack.\n");
        printf("Size of stack by default is 5.\n");
        printf("Type 1 for insertion,\n");
        printf("Type 2 for deletion,\n");
        printf("Type 3 for display,\n");
        printf("Type 4 to exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                {
                    insertion();
                    break;
                }
            case 2:
                {
                    deletion();
                    break;
                }
            case 3:
                {
                    view();
                    break;
                }
            case 4:
                {
                    break;
                }
            default:
                    printf("\nInvalid choice..!");
        }
    }
}
