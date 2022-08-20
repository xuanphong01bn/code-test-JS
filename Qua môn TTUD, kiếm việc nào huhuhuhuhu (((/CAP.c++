#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        int m, n, i;
        cin >> n;
        int *a = new int[n];
        int *b = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        int dem = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    dem++;
                    // break;
                }
            }
        cout << "ket qua la: " << dem;
        delete[] a;
        delete[] b;
    }

    return 0;
}