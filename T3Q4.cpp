#include <iostream>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main()
{
    int numElem;

    cout << "Enter how many numbers to enter >>  ";
    cin >> numElem;

    float *array = new float[numElem];

    getInputIntoVector(array, numElem);

    cout << "\nNumber of elements in array = " << numElem;

    cout << "\n\nDisplay data in array\n";

    displayVector(array, numElem);

    return 0;
}

void getInputIntoVector(float *a_array, int numElem)
{
    for (int i = 0; i < numElem; i++)
    {
        cout << "\nEnter element A[" << i << "] = ";
        cin >> a_array[i];
    }
}

void displayVector(float *a_array, int numElem)
{
    for (int i = 0; i < numElem; i++)
    {
        cout << a_array[i] << " ";
    }
}