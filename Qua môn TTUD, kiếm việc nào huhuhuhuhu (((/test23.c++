#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main()
{
    stack<string> S;
    int n = 40;
    string a[40];
    vector<string> v;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {

        string s;
        getline(cin, s);
        a[i] = s;
        if (a[i] == "#")
        {
            dem++;
            if (dem == 2)
                break;
        }
        stringstream ss(a[i]);
        string tmp;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
    }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    int tong = 0;
    int k = (v.size() - 1) / 3;
    for (int i = 2; i < k; i + 5)
    {
        cout << v[i];
    }
    return 0;
}
