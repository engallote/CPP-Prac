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
    cin >> M >> N;

    int res = 0;
    int arr[M][N] = {0,};

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            arr[i][j] = 0;
        }
    }

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int x = 0, y = 0, d = 0, cnt = 0;
    while(true)
    {
        if(arr[x][y] == 0)
        {
            arr[x][y] = 1;
            // cout << x << " " << y << endl;
        }

        x += dx[d];
        y += dy[d];

        if(x < 0 || y < 0 || x >= M || y >= N || arr[x][y] != 0) {
            x -= dx[d];
            y -= dy[d];
            int cnt = 0;

            while(x + dx[d] < 0 || y + dy[d] < 0 || x + dx[d] >= M || y + dy[d] >= N || arr[x + dx[d]][y + dy[d]] != 0)
            {
                d += 1;
                d %= 4;
                cnt += 1;

                if(cnt >= 4)
                {
                    break;
                }
            }
            
            if(cnt >= 4)
            {
                break;
            }

            x += dx[d];
            y += dy[d];
            res += 1;
        }
    }

    cout << res << endl;
    
    return 0;
}