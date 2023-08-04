
#include<bits/stdc++.h>
using namespace std;
int calculateSum(int n)
{
    if (n <= 0)
       return 0;
 
    int fibo[n+1];
    fibo[0] = 0, fibo[1] = 1;
    int sum = fibo[0] + fibo[1];
    for (int i=2; i<=n; i++)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
        sum += fibo[i];
    }
 
    return sum;
}
int main()
{
    int n = 4;
    cout << "Sum of Fibonacci numbers is : "
         << calculateSum(n) << endl;
    return 0;
}
