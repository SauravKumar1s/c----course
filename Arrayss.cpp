#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string cars[3] = {"A", "B", "C"};
//     cars[0] = "Rohit";
//     // cout << cars[0];
//     cout << cars[2];
//     // return 0;

// }

// loop with arrays

int main()
{
    string cars[3] = {"A", "B", "C"};
    for (int i = 0; i < 3; i++)
    {
        cout << cars[i] << " \n";
    }
    return 0;
}