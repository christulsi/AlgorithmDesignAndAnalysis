#include <iostream>

using namespace std;
 
void DFS(int);

int n, v;	
int visited[100];  
int matrix[100][100];

int main(void)
{
   

    cin >> n >> v;   
			
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cin >> matrix[i][j];
       }
    }       
 
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
        
    DFS(v-1);

    return 0;
}
 
void DFS(int i)
{
    cout << (i+1) << " ";
    
    visited[i]=1; 		
    				
    for(int j=0;j<n;j++){
        if(!visited[j]&&matrix[i][j]==1)	
            DFS(j);
    }
      
}