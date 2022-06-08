#include<stdio.h>
#include<stdbool.h>

int main()
{
    bool flag=0;
    int i, j, k;
    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        int arr[n];
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]);

        for(i=0,j=i+1; i<n, j<n; i++,j++){
            for(k=0;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    printf("%d + %d = %d",arr[i],arr[j],arr[k]) ;
                    flag=1;
                }
            }
        }

        if(flag==0)
           printf("No Sequence found") ;
           

    }
    return 0;
}
