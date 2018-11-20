#include<stdio.h>
 
void DFS(int);
				
int visited[256],n,v;  
int matrix[256][256];

int main()
{
    int i,j;	
   		
    scanf("%d",&n);           
    scanf("%d",&v);   
			
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           scanf("%d",&matrix[i][j]);
       }
    }       
 
    for(i=0;i<n;i++){
        visited[i]=0;
    }
        
    DFS(v-1);

    return 0;
}
 
void DFS(int i)
{
    int j;
    printf("%d ",i+1);
    visited[i]=1; 		
    				
    for(j=0;j<n;j++){
        if(!visited[j]&&matrix[i][j]==1)	
            DFS(j);
    }
      
}
