#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
using namespace std;
int main()
{
    stack<int> S;
    for (int i = 0; i < 5; i++)
    {
        S.push(i); // thêm 1 phần tử vào đỉnh của ngăn xếp, số phần tử của ngăn xếp tăng lên 1
    }
    while (!S.empty()) // đến khi S bằng rỗng thì thôi
    {
        int v = S.top(); // lấy giá trị của ptu đầu tiên ở đỉnh của ngăn xếp, số ptu ngăn xếp ko đổi
        S.pop();         // xoá ptu đầu tiên ở đỉnh, số phần tử giảm đi 1
        cout << v << endl;
    }
    return 0;
}