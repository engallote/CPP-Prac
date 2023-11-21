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

    int N;
    cin >> N;

    if(380 <= N && N < 425)
    {
        cout << "Violet" << endl;
    }
    else if(425 <= N && N < 450)
    {
        cout << "Indigo" << endl;
    }
    else if(450 <= N && N < 495)
    {
        cout << "Blue" << endl;
    }
    else if(495 <= N && N < 570)
    {
        cout << "Green" << endl;
    }
    else if(570 <= N && N < 590)
    {
        cout << "Yellow" << endl;
    }
    else if(590 <= N && N < 620)
    {
        cout << "Orange" << endl;
    }
    else
    {
        cout << "Red" << endl;
    }
    return 0;
}