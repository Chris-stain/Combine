/******************************************************************************

Developer: Christian Jimenez
ACM Practice Problem

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void combine(int arr1[], int &size1, int arr2[], int size2)
{
    int total = size1 + size2;
    int arrayHalf = size1/2;

    for(int i = 0; i < size2; i++)
    {
   	 arr1[arrayHalf + size2] = arr1[arrayHalf];
   	 arr1[arrayHalf] = arr2[i];
   	 arrayHalf++;
    }

    cout << "Combined Array 1: ";
    for (int i = 0; i < total; i++)
    {
   	 cout << arr1[i] << " ";
    }

}

int main()
{
    int myArray[10] = {1, 2, 3, 4, 5, 6};
    int myOther[4] = {20, 21, 22, 23};
    int myArraySize = 6;
    int myOtherSize = 4;

    cout << "Array 1: ";
    for (int i = 0; i < 6; i++)
    {
   	 cout << myArray[i] << " ";
    }

    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < 4; i++)
    {
   	 cout << myOther[i] << " ";
    }

    cout << endl;

    combine(myArray, myArraySize, myOther, myOtherSize);

    return 0;
}
