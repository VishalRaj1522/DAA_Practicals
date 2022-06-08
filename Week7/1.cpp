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
    
    int distance[20];
    int sssp[20];

    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
        sssp[i]=false;
    }

    distance[0]=0;

    int c=0;
    while(c<n-1){
        int min=INT_MAX;
        int dest=0;
        for(int i=0;i<n;i++){
            if(sssp[i]==false && distance[i]<min){
                min=distance[i];
                dest=i;
            }
        }
        sssp[dest]=true;

        for(int i=0;i<n;i++){
            if(graph[dest][i] && sssp[i]==false && distance[dest]+graph[dest][i]<distance[i] ){
                distance[i]=distance[dest]+graph[dest][i];
            }
        }
        c++;
    }

    for(int i=1;i<n;i++){
        cout<<i+1<<"-"<<distance[i]<<"  \n";
    }
}
