# include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    int arr1[n];
    for(int i=0;i<n;i++)
    cin >> arr1[i];
    sort(arr1,arr1+n);
    cin >> m;
    int arr2[m];
    for(int i=0;i<m;i++)
        cin >> arr2[i];
     sort(arr2,arr2+m);
    int maximum=max(n,m);

    int ptr1=0,ptr2=0;

    for(int i=0;i<maximum;i++)
        {
        if(arr1[ptr1]==arr2[ptr2])
        {
            cout << arr1[ptr1] << " ";
            ptr1++;
            ptr2++;
        }

        else if(arr1[ptr1]<arr2[ptr2])
            ptr1++;

        else
            ptr2++;
      }
}
