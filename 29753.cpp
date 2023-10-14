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

    int N, L;
    double x;
    cin >> N >> x;
    
    int X = round(100 * x);
    int a, b = 0, c = 0;
    int sum = 0;
    string s;
    for(int i = 1; i < N; i++)
    {
        cin >> a >> s;

        if(s == "A+") b = 450;
        else if(s == "A0") b = 400;
        else if(s == "B+") b = 350;
        else if(s == "B0") b = 300;
        else if(s == "C+") b = 250;
        else if(s == "C0") b = 200;
        else if(s == "D+") b = 150;
        else if(s == "D0") b = 100;
        else b = 0;

        sum += a * b;
        c += a;
    }

    cin >> L;
    c += L;

    if(floor(sum / c) > X){
        
        cout << "F" << endl;
    }
    else if(floor((sum + (L * 100)) / c) > X)
    {
        cout << "D0" << endl;
    }
    else if(floor((sum + (L * 150)) / c) > X)
    {
        cout << "D+" << endl;
    }
    else if(floor((sum + (L * 200)) / c) > X)
    {
        cout << "C0" << endl;
    }
    else if(floor((sum + (L * 250)) / c) > X)
    {
        cout << "C+" << endl;
    }
    else if(floor((sum + (L * 300)) / c) > X)
    {
        cout << "B0" << endl;
    }
    else if(floor((sum + (L * 350)) / c) > X)
    {
        cout << "B+" << endl;
    }
    else if(floor((sum + (L * 400)) / c) > X)
    {
        cout << "A0" << endl;
    }
    else if(floor((sum + (L * 450)) / c) > X)
    {
        cout << "A+" << endl;
    }
    else
    {
        cout << "impossible" << endl;
    }

    return 0;
}