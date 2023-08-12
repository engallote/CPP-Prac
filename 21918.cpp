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


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int res = 0;
    int arr[N];

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int a, b, c;
    for(int t = 0; t < M; t++)
    {
        cin >> a >> b >> c;

        if(a == 1)
        {
            arr[b - 1] = c;
        }
        else if(a == 2)
        {
            for(int i = b - 1; i < c; i++)
            {
                arr[i] = 1 - arr[i];
            }
        }
        else if(a == 3)
        {
            for(int i = b - 1; i < c; i++)
            {
                arr[i] = 0;
            }
        }
        else
        {
            for(int i = b - 1; i < c; i++)
            {
                arr[i] = 1;
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}