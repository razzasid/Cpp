// Display Prime Numbers Between two Intervals

#include<iostream>
using namespace std;

int main()
{
    int n, i;
    
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factors of " << n << "are ";

    for ( i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
        
    }
    
    return 0;
}