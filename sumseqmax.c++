// test bộ giải
//  6
//  -2 11 -4 13 -5 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int subSEQMax(vector<int> vt, int n)
{
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + vt[i];
        if (sum < 0)
        {
            sum = 0;
        }
        else
        {
            if (sum > maxSum)
                maxSum = sum;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    cout << "nhap n di" << endl;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << subSEQMax(a, n);
    return 0;
}