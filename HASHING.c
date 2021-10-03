#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 100

struct employee
{
	int empid;
	int age;
	char name[20];
}ht[max],temp;

int hash(int key)
{
	return key%max;
}

int main()
{
	int n,i,index,count=0;
	FILE *fp;

	printf("enter the no of employee\n");
	scanf("%d",&n);

	fp=fopen("source.txt","w");

	for(i=0;i<n;i++)
	{
		printf("enter the 4 digit key age and name of the emploee%d\n",i+1);
		scanf("%d",&temp.empid);
		scanf("%d",&temp.age);
		fflush(stdin);
		scanf("%s",temp.name);

		fprintf(fp,"%d\t%d\t%s\n",temp.empid,temp.age,temp.name);
	}

	fclose(fp);

	for(i=0;i<max;i++)
	ht[i].empid=-1;
	fp=fopen("source.txt","r");

	while(fscanf(fp,"%d%d%s",&temp.empid,&temp.age,&temp.name)!=EOF)
	{
		if(count==max)
		{
			printf("no space is available\n");
			break;
		}

		index=hash(temp.empid);

		printf("index value=%d\n",index);
		if(ht[index].empid==-1)
		{
			ht[index].empid=temp.empid;
			ht[index].age=temp.age;
			strcpy(ht[index].name,temp.name);
			count++;
		}

		else
		{
			printf("collision found for employee id %d \n",temp.empid);

			for(i=1;i<max;i++)
			{
				index = hash (temp.empid+1)%max;
				printf("index value = %d \n",index);

				if(ht[index].empid==-1)
				{
					ht[index].empid=temp.empid;
					ht[index].age=temp.age;
					strcpy(ht[index].name,temp.name);
					count++;

					printf("collision resolved for empid %d\n",temp.empid);
					break;
				}
			}
		}
	}


	fclose(fp);
	printf("hash address \t empid \t age \t name\n");

	for(i=0;i<max;i++)
	{
		if(ht[i].empid!=-1)
		printf("%d\t%d\t%d\t%s\n",i,ht[i].empid,ht[i].age,ht[i].name);
	}

return 0;

}
