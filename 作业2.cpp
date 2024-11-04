#include <iostream>
using namespace std;

int main()
{
    int a, b, c, max;
    cout << "请随机输入三个整数" << endl;
    cin >> a >> b >> c;
    if (a > b)
    {
        max = a;
    }
    else
        max = b;
    if (max < c)
    {
        max = c;
    }
    cout << max << endl;
}