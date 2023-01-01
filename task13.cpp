#include <iostream>
using namespace std;
main()
{
	system("cls");
	
	int workdays;
	int holidays;
	int gametime;
	int sleeptime;
	int minutes;
	int hours;
	cout << "Enter number fo Holidays. (10,20.i.e) : ";
	cin >> holidays;
	workdays=365-holidays;
	gametime=holidays*127+workdays*63;
	sleeptime=30000-gametime;
	hours=sleeptime/60;
	minutes=sleeptime%60;

	if(sleeptime>=65)
	{
	  cout << endl << "Tom sleeps well : " <<sleeptime << "minutes or " << hours << " hours and "           << minutes << " minutes less for play" << endl ;
	}
	if(sleeptime<65)
	{
	  cout << endl << "Tom will run away : " <<sleeptime << "minutes or " << hours << " hours and" 	  << minutes << " minutes for play" << endl ;
	}
	

}