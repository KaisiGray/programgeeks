#include <iostream>

 

using namespace std;

 

int main() {

     

    int num1, num2, temp;

    cout << "Enter Two Integers\n";

    cin >> num1 >> num2;

     

    cout << "Before Swapping\n";

    cout << "Num1 = " << num1 << "\nNum2 = " << num2 << endl;

     

    // Swap two numbers

    temp = num1;

    num1 = num2;

    num2 = temp;

 

    cout << "After Swapping\n";

    cout << "Num1 = " << num1 << "\nNum2 = " << num2;

 

    return 0;

}
