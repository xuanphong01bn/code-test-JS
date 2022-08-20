#include <iostream>
// #include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    cin >> a[0] >> a[1];
    cin >> a[2] >> a[3];
    sort(a.begin(), a.end());
    cout << a[3] << endl;

    return 0;
}