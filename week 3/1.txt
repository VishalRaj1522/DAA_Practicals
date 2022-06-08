#include <stdio.h>

void iSort(int a[], int n)
{
    int i;
    int j;
    int curr;
    int comp=0;
    int shift=0;

    for(i=1;i<n;i++){
        j=i-1;
        curr=a[i];
        while((j>-1)&&(curr<a[j])){
            a[j+1]=a[j];
            j--;
            comp++;
            shift++;
        }
        a[j+1]=curr;
        shift++;
    }

    for(i=0;i<n;i++)
            printf("%d ",a[i]) ;
    printf("\ncomparisions= %d",comp) ;
  
    printf("\nshifts= %d",shift) ;
  
}

int main ()
{
    int i, n, t;
    scanf("%d",&t);
    

    while(t--){
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    iSort(a, n);
    }
    return 0;
}
