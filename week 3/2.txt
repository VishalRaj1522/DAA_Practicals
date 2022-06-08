#include<stdio.h>
int swap(int *xp , int *yp)
{
    static int pass= 0 ;
    int temp = *xp;
    *xp = *yp ;
    *yp = temp ;
     pass++ ;
      
    
}
void s_sort(int a[], int n)
{

    int i , j , min_idx, comp = 0 , p;
    for(i = 0 ; i < n-1 ; i++)
    {
        min_idx = i ;
        for(j = i+1 ; j< n ; j++)
        {
            if(a[j]<a[min_idx])
            min_idx = j ;
            comp++ ;
        }
      p= swap(&a[min_idx],&a[i]) ;
    
   
    }
    for(int i = 0 ; i < n  ; i++)
           {
             printf("%d ",a[i]);
            }
    
    printf("\ncomparioson = %d", comp) ;
    printf("\nswaps = %d\n", p) ;
   


}

int main()
{
    int t , n , k ;
    
    scanf("%d",&t);
    scanf("%d",&n);
    
    int a[n] ;
    for(int j = 0 ; j < t ; j++)
    {
         for(int i = 0 ; i < n  ; i++)
           {
             scanf("%d",&a[i]);
            }
        s_sort(a,n) ;
       
    }
   
}
