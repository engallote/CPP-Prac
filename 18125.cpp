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
#include <sstream>
#include <regex>
using namespace std;


int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    int arr[N][M], arr2[N][M];
    
    int num, r = 0, c = M - 1;
    for(int i = 0; i < M; i++)
    {
        r = 0;
        for(int j = 0; j < N; j++)
        {
            cin >> num;
            arr2[r][c] = num;
            r += 1;
        }
        c -= 1;
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = true;
    for(int i = 0; i < N && flag; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(arr[i][j] != arr2[i][j])
            {
                flag = false;
                break;
            }
        }
    }

    if(flag)
    {
        cout << "|>___/|        /}" << endl;
        cout << "| O < |       / }" << endl;
        cout << "(==0==)------/ }" << endl;
        cout << "| ^  _____    |" << endl;
        cout << "|_|_/     ||__|" << endl;
    }
    else
    {
        cout << "|>___/|     /}" << endl;
        cout << "| O O |    / }" << endl;
        cout << "( =0= )\"\"\"\"  \\" << endl;
        cout << "| ^  ____    |" << endl;
        cout << "|_|_/    ||__|" << endl;
    }

    return 0;
}