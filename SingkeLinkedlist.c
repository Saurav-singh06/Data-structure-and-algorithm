
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count =0;
struct node
{
    int sem,phno;
    char usn[20],name[20],branch[10];
    struct node*next;
}*first=NULL,*last=NULL,*temp=NULL,*temp1;

void create()
{
    int sem ,phno;
    char usn[20],name[20],branch[10];
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter USN ,NAME,BRANCH,SEMESTER,PHNUM of student:");
    scanf("%s%s%s%d%d",usn,name,branch,&sem,&phno);
    strcpy(temp->usn,usn);
    strcpy(temp->name,name);
    strcpy(temp->branch,branch);
    temp->sem=sem;
    temp->phno=phno;
    temp->next=NULL;
    count++;
}
void insert_atfirst()
{
    if(first==NULL)
    {
        create();
        first=temp;
        last=first;
    }
    else{
        create();
        temp->next=first;
        first=temp;
    }

}
void insert_atlast()
{
    if(first==NULL)
    {
        create();
        first=temp;
        last=first;
    }
    else{
        create();
        temp->next=last;
        last=temp;
    }

}

void display()
{
    temp1=first;
    if(temp==NULL)
    {

        printf("List of empty to display\n");
        return;

    }
    printf("\n Linked list element from begining:\n");
    printf("USN\t NAME\t BRANCH\t SEMESTER\t PH.NUM\n");
    while(temp!=NULL)
    {

        printf("%s\t%s\t%s\t%d\t%d\n", temp1->usn,temp1->name,temp1->branch,temp1->sem,temp->phno);
        temp1=temp1->next;
    }
    printf("No. of studen =%d",count);

}
void delete_end()
{
    struct node *temp;
    temp=first;
    if(first=NULL)
    {
        printf("List is Empty\n");
        return;
        }
        if(temp->next=NULL)
        {
            printf("%s%s%s%d%d\n",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
            free(temp);
            first=NULL;
            }
            else{
                while(temp->next!=last)
                    temp=temp->next;
                printf("%s%s%s%d%d\n",last->usn,last->name,last->branch,last->sem,last->phno);
                free(last);
                temp->next=NULL;
                last=temp;
            }
            count--;
    }

    void delete_front()
    {

        struct node*temp;
        temp =first;
        if(first==NULL)
        {
            printf("list is empty\n");
            return;
        }
        if(temp->next==NULL)
        {

            printf("%s%s%s%d%D\N",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
            free(temp);
            first=NULL;
        }
        else{
            first=temp->next;
            printf("%s%s%s%d%d\n",temp->usn,temp->name,temp->branch,temp->sem,temp->phno);
            free(temp);
                   }
                   count--;
    }

    int main()
    {
        int ch,i,n;
        first =NULL;
        temp=temp!=NULL;
        printf("\n1 Create a SLl of n Employee");
        printf("\n2-Display from beginning");
        printf("\n3-Insert at end");
        printf("\n4-Delete at end");
        printf("\n5-Insert at beg");
        printf("\n6-Delete at beg");
        printf("\n7-exit\n");
        while(1)
        {
            printf("\n Enter the choice:");
            scanf("%d,&ch");
            switch (ch)
            {
                case 1: printf("\n Enter no. of student");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                    insert_atfirst();
                break;
                case 2: display();
                break;
                case 3: insert_atlast();
                break;
                case 4: delete_end();
                break;
                case 5: insert_atfirst();
                break;
                case 6: delete_front();
                break;
                case 7: exit(0);
                default : printf("Wrong choice");
            }
        }
        return 0;

    }


				for(i=0;i<n;i++)
				insert_rear( );
				break;
			case 2:	display( );
				break;
			case 3: insert_front( );
				break;
			case 4:	delete_front( );
				break;
			case 5: insert_rear( );
				break;
			case 6:	delete_rear( );
				break;
			case 7: exit(0);
			default:printf("Wrong Choice\n");
		}
	}
	return 0;
}

