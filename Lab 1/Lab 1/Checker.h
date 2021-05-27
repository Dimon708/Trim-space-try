#include <iostream>
#include <math.h>
#include <time.h>
#ifndef CHECKER_H
#define CHECKER_H
#include "CHECK_IT.h"
using namespace std;
class checker : private check_it
{
    private:
    int no;
	int *input;
    public:
		void ch_transport()
		{
			srand(time(nullptr));
		    no=rand()%10000;
			input=new int [no];
			for(int i=0;i<no;++i)
			{
				input[i]=rand()%1000-rand()%1000;
			}
			ch_create(true);
		}
    protected:
		void ch_create(bool t = false)
		{
			check_it test;
			try
			{
				test = *new check_it();//попытка создать объект проверяемого класса
				if (!t)
				{
					test.input(NULL);
				}
				else
				{
					test.input(input, no);
				}
				test.disignation();
				test.print();
			}
			catch (const char* msg)
			{
				cout << msg << endl;
			}
		}//</void>
};

#endif // CHECKER_H
