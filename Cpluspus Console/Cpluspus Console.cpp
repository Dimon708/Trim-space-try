#include <iostream>
#include <cstdlib>
#include <vector>
#include "TestSwap.h"
#include "Swapping.h"

using namespace std;

void print(vector<int> arr) 
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    vector<int> arr{ 5, 8, 9, 25, 27, 31 };
        //надо 8, 5, 25, 9, 31, 27
    vector<int> resArr = Swapping::disignation(arr);

    cout << "Begin arr: "; 
    print(arr);

    cout << "Res arr: ";
    print(resArr);
    cout << endl;

    if (TestSwapping::TestSwap())
        return 1;
    cout << "Testing completed successfully" << endl;

    system("pause");
    return 0;
}
