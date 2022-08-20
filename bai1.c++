// ý tưởng, so từng từ trong xâu, thấy từ "trình" là xoá
#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // lưu cả khoảng cách và xuống dòng
    string word;
    cin >> word;
    vector<string> v;
    stringstream ss(s); // tách chuỗi thành các từ riêng
    string token;
    while (ss >> token) // dùng token duyệt các từ từ chuỗi ss gồm các từ riêng
    {
        if (token != word)
        {
            cout << token << " ";
            v.push_back(token); // vector ăn cắp
        }
    }
    cout << endl;
    cout << "vector nhap la:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i != v.size() - 1)
        {
            cout << " ";
        }
    }
    return 0;
}
