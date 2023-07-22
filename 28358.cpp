#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <bitset>
#include <cstdlib>
using namespace std;

int find(int num, int n)
{
    if (n < 10)
    {
        if ((num & (1 << n)) > 0)
        {
            return 1;
        }
    }
    else {
        if ((num & (1 << (n / 10))) > 0 && (num & (1 << (n % 10))) > 0)
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    int arr[10];
    int num, res;

    for (int t = 0; t < T; t++)
    {
        num = 0;

        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];

            if (arr[i] == 0)
            {
                num |= (1 << i);
            }
        }

        res = 0;
        for (int m = 1; m <= 12; m++)
        {
            if (m < 10)
            {
                if ((num & (1 << m)) > 0)
                {
                    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                    {
                        for (int d = 1; d <= 31; d++)
                        {
                            res += find(num, d);
                        }
                    }
                    else if (m == 2)
                    {
                        for (int d = 1; d <= 29; d++)
                        {
                            res += find(num, d);
                        }
                    }
                    else
                    {
                        for (int d = 1; d <= 30; d++)
                        {
                            res += find(num, d);
                        }
                    }
                }
            }
            else
            {
                if ((num & (1 << (m / 10))) > 0 && (num & (1 << (m % 10))) > 0)
                {
                    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
                    {
                        for (int d = 1; d <= 31; d++)
                        {
                            res += find(num, d);
                        }
                    }
                    else if (m == 2)
                    {
                        for (int d = 1; d <= 29; d++)
                        {
                            res += find(num, d);
                        }
                    }
                    else
                    {
                        for (int d = 1; d <= 30; d++)
                        {
                            res += find(num, d);
                        }
                    }
                }
            }
        }

        cout << res << endl;
    }
    
    return 0;
}