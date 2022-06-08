#include<stdio.h>
int linear_search (int arr[], int n, int k)
{
  
  for (int j = 0; j < n; j++)
    {
      if (arr[j] == k)
      return j;
    }
  return 0;
}

int main ()
{
  int n, k , t ;
  scanf("%d",&t) ;
  scanf("%d", &n);		
  int arr[n];
  for(int p = 0 ; p < t ; p++)
  {
      for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
    }
  scanf("%d", &k);
  int result = linear_search (arr, n, k);
  if (result == 0)
    {
    printf("Not present");
    }
  else
    {
        result = result+ 1 ;
      printf("present %d", result);
    }
}

      
  }
