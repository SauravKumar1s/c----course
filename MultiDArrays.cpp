#include <iostream>
using namespace std;

int main()
{
    // int student1[2][4][6];
    // int student2[22][44][66][2];

    // // taking about byte here

    // std::cout << "size of student 1" << sizeof(student1) << std::endl;
    // std::cout << "size of student 2 " << sizeof(student2);

    int student1[2][3];
    int i, j;
;
    // Input values for the array
    cout << "Enter values for the array:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cin >> student1[i][j];
        }
    }

    // Print the array values
    cout << "Array values are:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << student1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
