#include "stdafx.h"
#include "CHECK_IT.h"
#include "checker.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
    check_it a;
	checker test;
	cout<<"Test mode on:\n";
	test.ch_transport();// генерация большого кол-ва входных данных
	cout<<"Test mode off:\n";
    a.input(NULL);
    a.disignation();
    a.print();
	system("pause");
    return 0;
}

