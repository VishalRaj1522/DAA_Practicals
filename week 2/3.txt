#include <stdio.h>

int main()
{
    int i, j, k;
    int n;
    int count=0;
    int t;
    scanf("%d",&t);

    while(t--){
          scanf("%d",&n);
    

        int arr[n];
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&k);

        for(i=0;i<n;i++){
            for(j=1; j<n; j++)
                if(arr[j]-arr[i]==k)
                        count++;
        }
        printf("%d pairs found",count) ;
       
    }
    return 0;
}
