//đọc email
#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int t;
    vector<string> v;
    cin >> t;
    cin.ignore(); // đọc dấu cách
    while (t--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }

        stringstream ss(s);
        string tmp;
        while (ss >> tmp) // tmp duyệt tất cả các phần tử của ss
            v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}