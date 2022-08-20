#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[100];
    cin >> n;
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        tong += a[i];
    }

    cout << tong << endl;
    return 0;
}