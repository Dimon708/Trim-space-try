#include <iostream>
#include <String>
#include "Trimer.h"
#include "Test.h"
using namespace std;
int main()
{
    string tmp;
    Tester test;
    test.init();
    trimmer str;
    getline(cin, tmp);
    str.trim_space(tmp);
    return 0;
}