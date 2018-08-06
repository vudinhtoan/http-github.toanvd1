#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <iostream>

using namespace std;

// khai bao prototype
void line();


int main(void)
{
	line();
	cout << "* Minh hoa ve ham *" << endl;
	line();
	system("pause");
	return 0;
}

void line()
{
	int i;
	for (i = 0; i < 19; i++)
	{
		cout << "*";
	}
	cout << endl;
}

