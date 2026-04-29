#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Get weight in kg: ";
    cin >> weight;

    cout << "Get height in meter: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "Your BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "Your weight category is : Underweight\n";
    else if (bmi < 25)
        cout << "Your weight category is : Healthy\n";
    else if (bmi < 30)
        cout << "Your weight category is : Overweight\n";
    else
        cout << "Your weight category is : Obesity\n";

    return 0;
}