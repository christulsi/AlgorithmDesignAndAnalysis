#include<stdio.h>

int fn(int, int , int);

int main(int argc, char const *argv[])
{
	int a, b, n;

	while(scanf("%d%d%d", &a, &b, &n)!=EOF) && a||b||n)	//collect input and validate for three zeros
	    printf("%d\n", fn(a, b, n%49));	

	return 0;
}

int fn(int a, int b, int n){

	if(n == 1 || n == 2) 	//f(1)=1 and f(2)=1
		return 1;

	return (a * fn(a, b, n-1) + b * fn(a, b, n-2))%7;
}