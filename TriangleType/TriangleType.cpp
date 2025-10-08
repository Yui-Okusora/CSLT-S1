#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c) cout << "equilateral\n";
    else if (a == b || b == c || c == a) cout << "isosceles\n";
    else cout << "scalene\n";
    return 0;
}