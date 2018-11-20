#include<iostream>

using namespace std;

void DFS(int);
int isVisited[100]={0}; //initialize with zeros
int Edges[100][100];
int sum = 0;
int n,v;

int main(){
 
    cin>>n>>v;//n:no of vertices and v is starting vertex

    //user input for adjacency matrix
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>Edges[i][j];
        }
        isVisited[i]=0;
    }

    DFS(v); 

    for(int i=1;i<=n&&sum<n;i++){
            if(isVisited[i]==0){
                isVisited[i]=1;
                DFS(i);
            }
    }
    return 0;
}

//Depth First Search Travesal
void DFS(int node){
    
    cout<<node<<" ";
    sum++;

    isVisited[node]=1;//assigned as visited node
        for(int j=1;j<=n;j++)
            if(isVisited[j]==0 && Edges[node][j]==1){
                isVisited[j]=1;
                DFS(j);//recursion
            }
        
}


