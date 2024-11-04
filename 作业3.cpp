#include <iostream>
using namespace std;

int main()
{
    int a;
    char b;
    cout << "请输入一个数" << endl;
    cin >> a;
    if (a >= 90)
    {
        cout << "b == 'A'";
    }
    else if (79 < a < 90)
    {
        cout << "b=='B'";
    }
    else if (69 < a < 80)
    {
        cout << "b=='C'";
    }
    else if (59 < a < 70)
    {
        cout << "b=='D'";
    }
    else
    {
        cout << "b=='E'";
    }
    return 0;
}