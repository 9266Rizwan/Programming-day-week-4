#include <iostream>
#include <windows.h>
using namespace std;

void comparingvalues()
{
	int value1;
	int value2;
	cout <<"Please enter value1 = ";
	cin >> value1;
	cout <<"Please enter value2 = ";
	cin >> value2;

	if(value1==value2)
	{
	  cout << "True";
	}

	if(value1!=value2)
	{
	  cout << "False";
	}
}

main()
{

	system("cls");
	comparingvalues();
	cout << endl << endl ;

}