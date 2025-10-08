#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    cin >> score;
    if(score < 60) cout << "F\n";
    else if(score < 70) cout << "D\n";
    else if(score < 80) cout << "C\n";
    else if(score < 90) cout << "B\n";
    else cout << "A\n";
    return 0;
}