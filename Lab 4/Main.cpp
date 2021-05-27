#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

vector<int> designation(vector<int> arr)
{
    if (arr.empty()) return arr;

    for (int i = 0; i < arr.size(); i++)
        if ((i % 2) == 1)
        {
            int tmp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = tmp;
        }
    return arr;
}

void print(vector<int> arr) 
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(int argc, char* argv[])
{
    vector<int> arr;

    for (size_t i = 1; i < argc; i++)
        arr.push_back(atoi(argv[i]));
   /* while (cin >> x) 
        arr.push_back(x);*/

    //vector<int> arr{ 5, 8, 9, 25, 27, 31 };
        //надо 8, 5, 25, 9, 31, 27
    vector<int> resArr = designation(arr);

    cout << "Begin arr: "; 
    print(arr);

    cout << "Res arr: ";
    print(resArr);
    cout << endl;    

    system("pause");
    return 0;
}
