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

// int main()
// {
//     string cars[3] = {"A", "B", "C"};
//     for (int i = 0; i < 3; i++)
//     {
//         cout << cars[i] << " \n";
//     }
//     return 0;
// }

//  2d array

// int main()
// {
//     int n, m;
//     int arr[100][100];

//     // Read the dimensions of the array
//     cin >> n >> m;
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; i++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//     }
// }

#include <iostream> // Necessary for input/output operations

using namespace std;

int main() {
    int n, m;
    int arr[100][100];

    // Read the dimensions of the array
    cin >> n >> m;

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { // Correct the loop variable to j++
            cin >> arr[i][j];
        }
    }

    // Your code for processing the array goes here

    return 0; // Indicate successful execution
}