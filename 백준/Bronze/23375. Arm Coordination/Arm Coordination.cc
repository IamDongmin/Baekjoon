#include <iostream>

using namespace std;

int main() 
{

    int x, y, radius;

    cin >> x >> y >> radius;


    cout << x - radius << ' ' << y + radius << '\n';
    cout << x + radius << ' ' << y + radius << '\n';
    cout << x + radius << ' ' << y - radius << '\n';
    cout << x - radius << ' ' << y - radius << '\n';

    return 0;
}
