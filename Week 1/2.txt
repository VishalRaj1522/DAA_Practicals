#include <stdio.h>
#include<stdbool.h>

void binSearch(int a[], int n, int key)
{
	int ctr = 0;
	int hd = 0;
	int tl = n-1;
	int mid;
	bool flag = true;

	while(hd<=tl)
	{
		mid = (hd+tl)/2;
		ctr++;

		if(a[mid]==key)
		{
		    printf("Present %d",ctr);
			flag=false;
			break;
		}

		else if(a[mid]<key)
			hd=mid+1;

		else
			tl=mid-1;
	}
	if(flag)
	     printf("Not Present %d",ctr);
		
}

int main ()
{
	int i;
	int n;
	int t;
	int key;

	scanf("%d",&t);
	
	while(t--)
	{
	    scanf("%d",&n);
		int a[n];

		for(i=0;i<n;i++)
		    scanf("%d",&a[i]);

	scanf("%d",&key);

		binSearch(a, n, key);
	}
	return 0;
}
