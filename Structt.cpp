#include <iostream>
using namespace std;

// Create a structure variable called myStructure

int main()
{
    struct
    {
        int myNum;
        string myString;
    } myStructure;

    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure  
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;
    return 0;
}