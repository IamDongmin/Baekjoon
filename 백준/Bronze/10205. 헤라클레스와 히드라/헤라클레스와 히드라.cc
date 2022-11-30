#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int k, head;
    string behaving;
    
    cin >> k;
    for (int i = 1; i <= k; i++) 
    {
        cin >> head;
        cin >> behaving;

        for (auto b : behaving) 
        {
            if (b == 'c')
                head++;
            else head--;
        }
        cout << "Data Set " << i << ":\n" << head << "\n\n";
    }

    return 0;
}