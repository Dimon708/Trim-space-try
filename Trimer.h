#include <iostream>
#include <String>
using namespace std;
#ifndef Trimer
#define Trimer
class trimmer
{
private:
    void print(string* tmp)
    {
        cout << "------------------------\n";
        cout << "Result: " << *tmp << endl;
    }
public:
    string trim_space(string tmp)
    {
        for (unsigned int i = 0; i < tmp.length(); i++)
        {
            if (tmp[i] == ' ' && tmp[i + 1] == ' ')
            {
               if(i) tmp.erase(i--, 1);
            }
        }
        if (tmp[0] == ' ')tmp.erase(0, 1);
        if (tmp[tmp.length()] == ' ')tmp[tmp.length()] = '\0';
        print(&tmp);
        return tmp;
    }
};
#endif 