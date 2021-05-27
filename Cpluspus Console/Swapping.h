#pragma once
class Swapping
{
public:
    static std::vector<int> disignation(std::vector<int> arr)
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
};

