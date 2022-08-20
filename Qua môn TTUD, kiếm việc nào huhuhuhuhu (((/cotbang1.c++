#include <iostream>
using namespace std;
int main()
{
    int n, m, i, dem = 0, j = 0;
    cin >> n >> m;
    int **a = new int *[m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int res = 0;
    for (i = 0; i < n; i++)
    {
        int tong = 0;
        for (j = 0; j < m; j++)
        {
            tong += a[j][i];
            // break;
        }
        cout << "Tong cot " << i + 1 << "là " << tong;
        //     int k = tong / n;
        //     if (k == 1)
        //         res++;
    }
    // cout << "ket qua " << res;
    for (int i = 0; i < m; i++)
        delete[] a[i];
    delete[] a;
    return 0;
}