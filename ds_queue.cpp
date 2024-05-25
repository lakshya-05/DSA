#include<iostream>
#include<stdlib.h>
using namespace std;
int a[5];
int f=-1,r=-1;

void insertion(){
    if(f==(r+1)%5){
        printf("Queue is FULL");
    }
    else{
        if(f==-1 && r==-1){
            f++;
            r++;
            cin>>a[r];
        }
        else{
            r=(r+1)%5;
            cin>>a[r];
        }
    }
}

void deletion(){
    if(f==-1){
        printf("Queue is EMPTY");
        f=-1;
        r=-1;
    }
    else{
        if(f==r){
            f=-1;
            r=-1;
        }
        else{
            f=(f+1)%5;
        }
    }
}

void display(){
    if (f==-1){
        printf("Queue is EMPTY");
    }
    else{
        printf("Queue elements are : ");
        for(int i=f%5 ; i<=r%5 ; i++){
            cout<<a[i]<<" "<<endl;
        }
    }
}


int main(){
    int choice;
    while(1){
        printf("Choose a function : \n");
        printf("InQueue -: 1\n");
        printf("DeQueue -: 2\n");
        printf("Show -: 3\n");
        printf("End -: 4\n");

        scanf("%d", &choice);

        switch (choice){
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
               display();
               break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                break;
            }
            default:
            printf("invalid\n");
        }
    }
}
