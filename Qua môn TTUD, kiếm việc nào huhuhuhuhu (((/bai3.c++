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
    int n = 100000;
    string a[100000];
    string b[100000];
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
    for (int i = 0; i < v.size(); i++)
    {
        b[i] = v[i];
    }
    int k = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (b[i] == "#")
            k = i;
    }
    for (int j = k + 1; j < v.size(); j++)
    {
        if (b[j] == "?max_money_period")
        {
            int a = atoi(b[j + 1].c_str());
            int c = atoi(b[j + 2].c_str());
            for (int i = 0; i < k; i++)
            {
            }
        }
    }
    return 0;
}
