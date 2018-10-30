#include <iostream>
using namespace std;
 
int main(void)
{
    int a, b, n;
    int s[50] = {0, 1, 1}; //set f(0) = 0, f(1) = 1 and f(2) = 1
     
    while(cin >> a >> b >> n && (a || b || n)) //collect input for a, b and n and validates for zeros
    {
        for(int i = 3; i < 50; i++)
        {
            s[i] = (a*s[i-1]+b*s[i-2]) % 7; //calculates f(n) 
        }
        cout << s[n%49] << endl;
    }
     
    return 0;
}

