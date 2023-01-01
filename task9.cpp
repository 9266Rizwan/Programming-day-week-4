#include <iostream>
#include <windows.h>
void reverseinput();
using namespace std;

main()
{

	system("cls");
	reverseinput();
	cout << endl << endl ;

}

void reverseinput()
{
	string value;
	cout<< "Please enter value as (True/False) : ";
	cin >> value;
	if(value=="True")
	{
	  cout << "False";
	}
	if(value=="False")
	{
	  cout << "True";
	}
}
