#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;
class Solu
{
public:
    int findlength(vector<int> &a)
    {
        if (a.size() <= 1)
            return a.size(); // mảng có 1 phần tử trả lại ngay kết quả
        int ans = 1, count = 1;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                count++;
                ans = max(ans, count); // tìm dãy tăng lớn nhất
            }
            else
            {
                count = 1;
            }
        }
        return ans; // trả về kết quả
    }
};
main()
{
    vector<int> v; // nhậP vector
    int arr[100000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        v.push_back(arr[i]);
    }
    Solu tmp;
    cout << (tmp.findlength(v));
}