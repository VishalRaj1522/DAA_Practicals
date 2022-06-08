# include <iostream>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--){
    int n,i;
    cin >> n;
    char ch[n];
    int temp[200]={0};
    for(i=0;i<n;i++)
    {
        cin >> ch[i];
        temp[ch[i]]++;
    }
    ch[i]='\0';

    int index=-1,max=-1;
    for(int i=0;i<200;i++)
    {
        if(temp[i]>max){
            index=i;
            max=temp[i];
        }
    }
    if(max>1)
    cout << (char)index << " " << max << endl;
     else
      cout<<"NO DUPLICATES"<<endl;
     }

}
