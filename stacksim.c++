#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    stack<string> S;
    int n = 40;
    string a[40];
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        a[i] = s;
        if (a[i] == "#")
            break;
        stringstream ss(a[i]);
        string tmp;
        while (ss >> tmp)
        {
            v.push_back(tmp);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "PUSH")
            S.push(v[i + 1]);
        else if (v[i] == "POP")
        {
            if (S.empty())
            {
                cout << "NULL" << endl;
            }
            else
            {
                cout << S.top() << endl;
            }
            // cout << S.top() << endl;
            // S.pop();
            S.pop();
        }
        if (S.empty())
        {
            cout << "NULL" << endl;
        }
    }

    return 0;
}
