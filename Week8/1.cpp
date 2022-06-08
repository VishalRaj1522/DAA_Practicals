#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of nodes : ";
    cin>>n;
    int graph[20][20];
    cout<<"Enter matrix: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>graph[i][j];
        }
    }
    
    int parent[20];
    int key[20];
    bool mst[20];

    for(int i=0;i<n;i++){
        parent[i]=-1;
        key[i]=INT_MAX;
        mst[i]=false;
    }

    parent[0]=-1;
    key[0]=0;

    int c=0;
    while(c<n-1){
        int min=INT_MAX;
        int dest=0;
        for(int i=0;i<n;i++){
            if(mst[i]==false && key[i]<min){
                min=key[i];
                dest=i;
            }
        }
        mst[dest]=true;

        for(int i=0;i<n;i++){
            if(graph[dest][i] && mst[i]==false && graph[dest][i]<key[i]){
                parent[i]=dest;
                key[i]=graph[dest][i];
            }
        }
        c++;
    }

    for(int i=1;i<n;i++){
        cout<<parent[i]<<"-"<<i<<"  \n";
    }
}
