#include<stdio.h>
    #define N 5
    int stack[8],top=-1;
    void push()
    {
        int t;
        if(top==(N-1))
        {
            printf("\nStack overflow");
        }
        else
        {
            printf("\nEnter the number to be inserted");
            scanf("\n%d",&t);
            top++;
            stack[top]=t;
        }
    }

    void pop()
    {
        int item;
        if(top==-1)
        {
            printf("\nStack underflow");
        }
        else
        {
            item=stack[top];
            printf("The element popped is\n %d",item);
            top--;

        }
    }
    void display()
    {
        int i;
        if(top>=0)
        {
            for(i=top;i>=0;i--)
            {
                printf("\n%d",stack[i]);
            }
        }
        else
            printf("\nThe stack is empty");

    }
    void main()
    {
        int z;
        do{
        printf("\nEnter these keys for the following ops 1.push 2.pop 3.display 4.exit");
        scanf("\n%d",&z);
        switch(z)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
        }
        }while(z!=4);
    };
