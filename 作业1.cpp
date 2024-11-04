#include <iostream>
using namespace std;

int main()
{
    int list[10], t;
    cout << "请随机输入10个数:" << endl for (int k = 0; k < 10; k++) cin >> list[k];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (list[j] > list[j + 1])
            {
                int t = list[j];
                list[j] = list[j + 1];
                list[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << list[i];
    }
    return 0;
}