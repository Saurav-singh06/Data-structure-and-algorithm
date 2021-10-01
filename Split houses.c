#include <stdio.h>

#include <stdlib.h>

 

int check(char* a,int n)

{

    int flag = 1;

    for(int i=0;i<n-1;i++)

    {

        if(a[i]=='H' && a[i+1]=='H'){

        flag = 0;

        }

    }

    return flag;

}


 

int main(){

    int n,i;

    scanf("%d",&n);

    char g[20];

    scanf("%s",g);

    if(check(g,n)==0)

    {

        printf("NO\n");

    }

    else

    {

        for(i=0;i<n;i++)

        {

            if(g[i]=='.')

            {

                g[i] = 'B';

            }

        }

    printf("YES\n");

    printf("%s",g);

    }

    return 0;

}
