#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    cin >> year;
    
    if(year % 400 == 0) cout << "leap year";
    else if (year % 4 == 0) cout << "leap year";
    else cout << " not leap year";
    
    return 0;
}