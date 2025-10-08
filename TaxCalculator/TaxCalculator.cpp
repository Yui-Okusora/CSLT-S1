#include <iostream>

using namespace std;

int main()
{
    float income = 0;
    cin >> income;
    if(income <= 10000) cout << income * 0.05;
    else if(income <= 30000) cout << income * 0.1;
    else if(income <= 50000) cout << income * 0.15;
    else cout << income * 0.2;
    return 0;
}