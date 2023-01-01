#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{
	system("cls");

	gotoxy(20,11);
	cout << "    88888   8888  8888888  88   88   88     888    888     88         " << endl;
	gotoxy(20,12);
	cout << "    88  88   88        88  88   88   88    88 88   88 88   88         " << endl;
	gotoxy(20,13);
	cout << "    8888     88     888    88   88   88   88   88  88  88  88         " << endl;
	gotoxy(20,14);
	cout << "    88 88    88   88        88 8888 88   888888888 88   88 88         " << endl;
	gotoxy(20,15);
	cout << "    88  88  8888  8888888    88    88   88      88 88     888         " << endl;
}