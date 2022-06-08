#include <stdio.h>
#include <math.h>


void jSearch (int a[], int n, int key){
    int i=0;
    int x;
    int comp=0;
    int m=sqrt(n);

    while(a[m]<=key&&m<n){
        i=m;
        m+=sqrt(n);
        comp++;

        if(m>n-1)
            m=n;
    }

    for(x=i;x<m;x++){
        comp++;
        if(a[x]==key){
            printf("Present %d\n",comp) ;
            return;
        }

    }
    printf("NotPresent\n") ;
    
}

int main ()
{
    int i, n, t;
    int key;
    
    scanf("%d",&t);
   

    while(t--){
        scanf("%d",&n);
        int a[n];

        for(i=0;i<n;i++)
            scanf("%d",&a[i]) ;
        scanf("%d",&key) ;
        

        jSearch(a, n, key);
    }
}
