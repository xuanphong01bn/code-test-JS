#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    list<int> L;
    for (int i = 0; i < 5; i++)
    {
        L.push_back(i);
    }
    list<int>::iterator it;           // vòng lặp cho danh sách. nhìn mỗi element 1 lần
    it = find(L.begin(), L.end(), 3); // tìm phần tử 3, lấy ra index
    L.insert(it, 10);                 // chèn 10 vào index đã tìm ở trên
    for (it = L.begin(); it != L.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}