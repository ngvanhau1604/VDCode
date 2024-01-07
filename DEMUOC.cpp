#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    
    cin >> n;
    int a[1000];
    a[0] = 1;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            a[a[0]++] = i;
        }
    }
    cout << n << " co " << a[0] << " uoc. Danh sach uoc:" << endl;
    for (int i = 1; i < a[0]; i++)
    {
        cout << a[i] << endl;
    }
    cout << n << endl;
}