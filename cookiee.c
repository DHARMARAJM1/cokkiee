#include <stdio.h>
#include<string.h>
int main(void) 
{
	int t,i,j,n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&n);
	    char a[n][8];
	    for(j=0;j<n;j++)
	    {
	        scanf("%s",a[j]);
	    }
	    if(strcmp(a[n-1],"milk")!=0)
	    { 
	        printf("NO");
	    }
	    else
	    {    
	    for(j=1;j<n;j++)
	    {
	        if(strcmp(a[j-1],"cookie")==0 && strcmp(a[j],"milk")!=0)
	        {
	            printf("NO");
	            break;
	        }
	    }
	    if(j==n)
	    {
	        printf("YES");
	    }
	    }
	    printf("\n");
	}
	return 0;
}

