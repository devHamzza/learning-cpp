#include <iostream>
using namespace std;

int main()
{
    // arrays and pointers relation
    int agesOfStudents[5] = {43, 62, 34, 21, 89};
    int *agePtr = agesOfStudents;

    cout << "Address stored in agesOfStudents: " << agesOfStudents << endl;
    cout << "Address stored in *agePtr: " << agePtr << endl;
    cout << "Value stored in *agePtr: " << *agePtr << endl;
    cout << "Value stored in *agePtr at 4th position: " << *(agePtr + 3) << endl;

    cout << "Loop started" << endl;
    for (int i = 0; i < 5; i++)
    {
        // Incrementing through pointer increment the value stored in that memory address.
        *(agePtr + i) += 1;

        cout << "Value stored in *(agePtr + " << i << "): " << *(agePtr + i) << endl;
        cout << "Value stored in agesOfStudents[" << i << "]: " << agesOfStudents[i] << endl;
    }

    // pointers Comparison
    if (*(agePtr + 2) == 35)
    {
        cout << "The If check (*(agePtr + 2) == 35) is true" << endl;
    }

    return 0;
}