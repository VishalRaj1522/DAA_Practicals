#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
    {
        double i1=a.first/a.second;
        double i2=b.first/b.second;
        return i1>i2;
    }
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>item;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        item.push_back({x,y});
    }
    int k;
    cin>>k;
    sort(item.begin(),item.end(),compare);
    double profit =0.0;
    for(int i=0;i<n;i++)
    {
        if(k>=item[i].second)
        {
            k-=item[i].second;
            profit+=item[i].first;

        }
        else
        {
            profit+=double(item[i].first)/(item[i].second*k);
            break;
        }
    }
    cout<<profit;
    return 0;
}
