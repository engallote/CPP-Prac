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

    int N;
    cin >> N;   
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "@@@@@";
        }
        cout << endl;
    }

    for(int i = 0; i < N * 3; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "@";
        }
        for(int j = 0; j < N; j++)
        {
            cout << "   ";
        }
        for(int j = 0; j < N; j++)
        {
            cout << "@";
        }
        cout << endl;
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << "@@@@@";
        }
        cout << endl;
    }
    return 0;
}