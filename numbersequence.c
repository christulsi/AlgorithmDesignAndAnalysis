#include<stdio.h>

int fn(int, int , int);

int main(int argc, char const *argv[])
{
	// int a = 1,b = 1 , n = 3;
	int a, b, n;

	do{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &n);

		printf("%d\n", fn(a, b, n));
	}while(a||b||n);	//validate for three zeros
		

	return 0;
}

int fn(int a, int b, int n){

	if(n == 1 || n == 2) 	//f(1)=1 and f(2)=1
		return 1;

	return (a * fn(a,b,n-1) + b * fn(a,b,n -2))%7;
}