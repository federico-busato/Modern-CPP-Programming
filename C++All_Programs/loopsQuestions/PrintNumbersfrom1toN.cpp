#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n : ";

    cin >> n;
    // using for loop
    for (int i = 1; i <= n; i++)
    {
        cout << "\n " << i;
    }
    // using while loop
    int i = 1;
    cout<<endl;
    while (i <= n)
    {
        cout << i << endl;
        i++;
    }

    // using do while loop
    i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}