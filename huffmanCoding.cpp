#include<iostream>
#include<string>
#include<vector>

using namespace std;


struct Node{
	char ch;
	int weight;
	Node *leftChild,*rightChild;
};

//sort the nodes in ascending order to choose two least minimun values
void Sort(Node** nodes,int low, int high)
{
	int temp=0;
	for(int i=low;i<high;i++)
    {
        for(int j=low;j<high;j++)
        {
            if(nodes[i]->weight<nodes[j]->weight)
            {
                temp=nodes[i]->weight;
                nodes[i]->weight=nodes[j]->weight;
                nodes[j]->weight=temp;
            }
        }
 	}
 	//for (int k=0; k<high; k++) cout<<nodes[k]->weight<<" ";
}

//huffmann tree
void BuildHuffman(Node** nodes,int n){
	Sort(nodes,0,n);
	int p=0;
	int totalfreq=0;
	
	while(p<n-1){
		Node* minNode1=nodes[p];
		Node* minNode2=nodes[++p];
		Node* newNode=new Node;
		newNode->weight=minNode1->weight + minNode2->weight;
		totalfreq+=newNode->weight;
		newNode->leftChild=minNode1;
		newNode->rightChild=minNode2;
		nodes[p]=newNode;
		Sort(nodes,p,n);
		
	}
	cout<<totalfreq<<endl;
}

int main(){
	int n;
	cin>>n;
	char ch;
	int weight;
	Node* nodes[n];
	
	for(int i=0; i<n; i++){
		Node* node=new Node;
		cin>>ch>>weight;
		node->ch=ch;
		node->weight=weight;
		nodes[i]=node;
	}
	BuildHuffman(nodes,n);
	return 0;
}
