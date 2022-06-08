# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
   {
    int n,key,flag=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    cin >> key;

    sort(a,a+n);
    int i=0,j=n-1;

    while(i<j){
        if(a[i]+a[j]==key){
            cout << a[i] << " " << a[j] << endl;
            flag=1;
            break;
        }

        else if(a[i]+a[j]<key){
            i++;
        }

        else
            j--;
    }

    if(flag==0)
        cout << "No such element exist" << endl;
   }
    return 0;
}
