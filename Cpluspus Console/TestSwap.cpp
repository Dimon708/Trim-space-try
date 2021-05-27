#include "TestSwap.h"
#include <vector>
#include "Swapping.h"

using namespace std;

bool TestSwapping::TestSwap()
{
    // ���� �� �� ������������������ / ������ ������
    if (!TestEmptyArr())
        return 1;
    //���� �������� �������
    if (!TestSimpleArr())
        return 1;

    // ���� ������� � �� ������ ����������� ���������
    if (!Test_With_Odd_Num_Elem())
        return 1;

    return 0;
}

bool TestSwapping::TestEmptyArr()
{
    vector<int> arr;
    vector<int> resArr = Swapping::disignation(arr);
    if (arr == resArr)
        return 1;
    return 0;
}

bool TestSwapping::TestSimpleArr()
{
    vector<int> arr{ 5, 8, 9, 25, 27, 31 };
    vector<int> resArr{ 8, 5, 25, 9, 31, 27 };
    if (resArr == Swapping::disignation(arr))
        return 1;
    return 0;
}

bool TestSwapping::Test_With_Odd_Num_Elem()
{
    vector<int> arr{ 5, 8, 9, 25, 27 };
    vector<int> resArr{ 8, 5, 25, 9, 27 };
    if (resArr == Swapping::disignation(arr))
        return 1;
    return 0;
}
