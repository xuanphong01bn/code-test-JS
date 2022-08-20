#include <iostream>
// #include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> L(n, 1); // độ dài ban đầu tại các vị trí đều băng f1
    for (int i = 0; i < n; i++)
    {
        // cập nhật L[i] thông qua L[j] đã biếT
        // duyệt qua từng phần tử đứng trước chỉ số i
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                L[i] = max(L[i], L[j] + 1);
            }
        }
    }
    cout << "do dai lon nhat la:" << *max_element(L.begin(), L.end()) << endl;
    return 0;
}