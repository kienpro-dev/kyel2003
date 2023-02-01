#include <iostream>
#include "2_Train_2_fileclass.cpp"

using namespace std;

int main()
{
    int arr1[] = {2, 1, 4, 5, 3};
    double arr2[] = {1.3, 4.2, 6.7};
    cout << ArrayCalculator::maxOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
    cout << ArrayCalculator::minOfArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
    cout << ArrayCalculator::maxOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
    cout << ArrayCalculator::minOfArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
}