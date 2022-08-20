// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
//
long long count(long long arr[], long long n)
{
    long long tm[2] = {1, 0};
    long long ketqua = 0, sum = 0;

    for (long long i = 0; i <= n - 1; i++)
    {
        sum = ((sum + arr[i]) % 2 + 2) % 2;
        tm[sum]++;
    }
    ketqua = ketqua + (tm[0] * (tm[0] - 1) / 2);
    ketqua = ketqua + (tm[1] * (tm[1] - 1) / 2);
    return (ketqua); // tra ve ket qua
}
int main()
{
    long long arr[100000]; // nh?p dãy
    long long n;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long test = 1000000007;
    long long kq = count(arr, n); // in ra k?t qu? dãy ch?n
    long long c = kq / test;
    long long fi = kq - c * test;
    cout << fi << endl;
    // if (kq < test)
    //     cout << kq << endl;
    // if (kq == test)
    //     cout << 0 << endl;
    // if (kq > test)
    //     cout << kq - test << endl;
    // return 0;
}