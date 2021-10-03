#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 5
int s[MAX],top=-1,item;
int IsFull()
{
    if(top>=MAX-1)
        return 1;
    return 0;
}
int IsEmpty()
{
    if(top==-1)
        return 1;
    return 0;
}
void push (int item)
{
    top++;
    s[top]=item;
}
void pop()
{
    item=s[top];
    top--;
}
void display()
{
    int i;
    printf("\n Enter of Stack are: ");
    for(i=top;i>=0;i--)
        printf("\n%d",s[i]);
}
void check_pal()
{
    int num,temp,digit,revnum=0,k=0;
    while(top!=-1)
        pop();
    printf("\n Enter the number\n");
    scanf("%d",&num);
    temp= num;
    top =-1;
    while(temp!=0)
    {
        digit = temp%10;
        push(digit);
        temp=temp/10;
    }
    while(top!=0)
    {
        pop();revnum= item* pow(10,k)+revnum;
        k=k+1;
    }
    printf("\n Reverse of %d is %d\n",num,revnum);
    if(num==revnum)
        printf("The %d is Pallindrome\n",num);
    else
        printf("The %d is not Pallindrome\n",num);
}
int main()
{
    int ch;
    do
    {

        printf("\n1 Push \n2. Pop \n3.Display \n4. Pallindrome \n5.Exit\n");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {

            case 1: printf("\n Enter the element to be inserted:");
            scanf("%d",&item);
            if(IsFull( ))
                printf("Stack Overflow\n");
            else
                push(item);
            break;
            case 2: if(IsEmpty( ))
            printf("Stack underflow\n");
            else
                pop(item);
            break;
            case 3: if(IsEmpty( ))
                    printf("Stack is empty\n");
                    else
                        display();
                    break;
            case 4: check_pal();
            break;
            case 5: exit(0);
            default : printf("Invalid choice;\n");
        }

    }while(ch!=5);

    return 0 ;

}
