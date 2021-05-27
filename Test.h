#include <iostream>
#include <math.h>
#include <time.h>
#include "Trimer.h"
using namespace std;
#ifndef Test
#define Test
string allowedchar = "qwertyuiopasdfghjklzxcvbnm ";
class Tester
{
private:
trimmer test;
string true_trim_space(string& tmp)
{
	for (unsigned int i = 0; i < tmp.length(); i++)
	{
		if (tmp[i] == ' ' && tmp[i + 1] == ' ')
		{
			if (i) tmp.erase(i--, 1);
		}
	}
	if (tmp[0] == ' ')tmp.erase(0, 1);
	if (tmp[tmp.length()] == ' ')tmp[tmp.length()] = '\0';
	return tmp;
}
string generator(unsigned int input)
{
	string output = "";
	srand(time(0));// рандомим
	for (unsigned int i = 0; i < input; ++i)
	{
		int random = rand() % 60;
		if (random > allowedchar.length() - 1)
		{
			output += " ";
		}
		else
		{
			output += allowedchar.at(random);
		}
	}
	cout << output << endl;
	return output;
}
public:
	void init()
	{
			test.trim_space("");// проверка пустой строки
			string tmp = generator(50000);
			if (test.trim_space(tmp) == true_trim_space(tmp))
			{
				cout << "\nTest success\n";
				return;
			}
			cout << "\nTest failed!\n";
	}
};
#endif 