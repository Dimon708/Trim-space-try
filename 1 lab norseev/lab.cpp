#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class swaping {
private:
    int* arr = {0}; int col = 0;
public:
    void input() {
        cout << "Input length for manual, add (in begin) operator '-' for automatical define array: ";
        cin >> col;
        if (!col) {
            cout << "ERROR 404: The array cannot be of zero dimension. Try again?\n";
            input();
            return;
        }
        if (col < 0) {
            srand(time(nullptr));//привязываем генератор случайных чисел к времени
            col *= -1;
            arr = new int[col];
            for (int i = 0; i < col; ++i) {
                arr[i] = rand() % 100-38;
            }
            print();
            return;
        }
        arr = new int[col];
        cout << "Input array: \n";
        for (int i = 0; i < col; i++) {
            cout << i << ": ";
            cin >> arr[i];
        }
    }
    void disignation() {
        for (int i = 0; i < col - 1; ++i) {
            if (!(i % 2)) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
    void print() {
        if(col)cout << "Print array:\n";
        for (int i = 0; i < col; i++) {
            cout << i << ": " << arr[i] <<endl;
        }
    }
};
int main()
{
    swaping a;
    a.input();
    a.disignation();
    a.print();
    system("pause");
    return 0;
}
