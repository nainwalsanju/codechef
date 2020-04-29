#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,i,rem,flag;
	int a[100]={0};
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    rem=0;
	    flag=0;
	    for(i=0;i<n;i++)
	    {
	        rem=rem+a[i];
	        if(rem>=k)
	        {
	            rem=rem-k;
	        }
	        else
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO %d\n",i+1);
	    }
	}
	return 0;
}


