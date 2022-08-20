#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            res++;
        }
    }
    cout << "ket qua: " << res + 1;
    delete[] a;
    return 0;
}