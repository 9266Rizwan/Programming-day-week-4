#include <iostream>
#include <windows.h>
using namespace std;

void printmaze()
{
	cout << "###########################################################################" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "##                                                                       ##" << endl ;
	cout << "###########################################################################" << endl ;
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playermove(int x,int y)
{

	gotoxy(x,y-1);
	cout <<" ";
	gotoxy(x,y);
	cout <<"P";
	Sleep(400);

}

main()
{

	system("cls");
	printmaze();
	int x=4;
	int y=4;
	playermove(x,y);
	while(true)
	{
	 playermove(x,y);
	 if(y<23)
	  { 
		y=y+1;
	  }
	 if(y==23)
	  {
		gotoxy(x,y-1);
		cout <<" ";
		y=4;
	  }

	 }
	gotoxy(0,32);

}