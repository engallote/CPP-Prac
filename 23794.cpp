#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(void)
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    cout << "@";
    for (int i = 0; i <= N; i++)
        cout << "@";
    cout << endl;

    for (int k = 0; k < N; k++)
    {
        cout << "@";
        for (int i = 0; i < N; i++)
            cout << " ";
        cout << "@" << endl;
    }

    cout << "@";
    for (int i = 0; i <= N; i++)
        cout << "@";
    cout << endl;
    return 0;
}