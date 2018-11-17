#include<stdio.h>
 
void DFS(int);
				
int visited[4],n,v;    //n is no of vertices ,v is starting vertice and the graph is array matrix[4][4]
int matrix[4][4]; 
// {
// 					{0,1,0,1},	//1
// 					{1,0,1,1},	//2
// 					{0,1,0,1},	//3
// 					{1,1,1,0}	//4
// 					};
 
void main()
{
    int i,j;	
    //printf("\nEnter number of vertices:");				
    scanf("%d",&n);             //number of vertices
    //printf("\nEnter starting vertice:");
    scanf("%d",&v);             //starting vertice
			
    //read the adjecency matrix
    //printf("\nEnter adjecency matrix of the graph:");
   
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
 
	//visited is initialized to zero
    for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(v-1);
}
 
void DFS(int i)
{
    int j;
    printf("%d ",i+1);
    visited[i]=1; 							//set v to visited 
    
    for(j=0;j<n;j++)
       if(!visited[j]&&matrix[i][j]==1)		// if v is not visited then explore
            DFS(j);
}