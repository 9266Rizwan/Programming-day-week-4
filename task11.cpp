#include <iostream>
using namespace std;


main()
{
	system("cls");

	float speed;
	cout <<"Enter your driving speed in km/h : ";
	cin >> speed;

	if(speed<=100)
	{
	   cout <<"Perfect! You’re going good. " ;
	}

	if(speed>100)
	{
	   cout <<"Halt….YOU WILL BE CHALLENGED!!!" ;
	}


}