#include <iostream>
using namespace std;

void Pakistan()
{
	float finalprice;
	float ticketprice;
	//float discount=ticketprice*0.05;
	finalprice=ticketprice;//-discount;
	cout << "Your total Payable amount = " << finalprice << endl ;	
}

void Ireland()
{
	float finalprice;
	float ticketprice;
	float discount=ticketprice*10/100;
	finalprice=ticketprice-discount; 
	cout << "Your total Payable amount = " << finalprice << endl ;	
}

void India()
{
	float finalprice;
	float ticketprice;
	float discount=ticketprice*(20/100);
	finalprice=ticketprice-discount; 
	cout << "Your total Payable amount = " << finalprice << endl ;	
}

void England()
{
	float finalprice;
	float ticketprice;
	float discount=ticketprice*(30/100);
	finalprice=ticketprice-discount; 
	cout << "Your total Payable amount = " << finalprice << endl ;	
}

void Canada()
{
	float finalprice;
	float ticketprice;
	float discount=ticketprice*(45/100);
	finalprice=ticketprice-discount; 
	cout << "Your total Payable amount = " << finalprice << endl ;	
}

main()
{

	system("cls");
	string countryname;
	float ticketprice;
	ticketprice=0;
	float finalprice;
	finalprice=0;

	cout << "Enter Country name : ";
	cin >> countryname;

	cout << "Enter your ticketprice : ";
	cin >> ticketprice;

	if(countryname=="Pakistan")
	{
	  Pakistan();
	}

	if(countryname=="Ireland")
	{
	  Ireland();
	}

	if(countryname=="India")
	{
	  India();
	}

	if(countryname=="England")
	{
	  England();
	}

	if(countryname=="Canada")
	{
	  Canada();
	}


}