// Marshall Gurley 10/28 Chapter 9 Assignment 1

#include <iostream>
using namespace std;
int* createNewArray(const int arr[], int size);

int main()
{
    int arr[] = { 1,2,3,4,5 };
    int* ctr = createNewArray(arr, 5);
    for (int i = 0; i < 6; ++i) {
        cout << ctr[i] << endl;
    }
}

int* createNewArray(const int arr[], int size) {
    int* newArr = new int[size + 1];
    newArr[0] = 0;
    for (int i = 0; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    return newArr;
}



