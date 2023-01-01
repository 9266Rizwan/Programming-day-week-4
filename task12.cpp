#include <iostream>
#include <windows.h>
using namespace std;

main()
{
	system("cls");

	int red;
	int white;
	int tulips;
	float redprice=2.00;
	float whiteprice=4.10;
	float tulipsprice=2.50;
	float total;
	float discount;

	cout <<"Enter number of Red rose   : ";
	cin >> red;
	cout <<"Enter number of White rose : ";
	cin >> white;
	cout <<"Enter number of Tulips     : ";
	cin >> tulips;

	total=red*redprice + white*whiteprice + tulips*tulipsprice;
	
	if(total>=200)
	{
	  discount=total-total*0.20;
	  cout<< "Total Amount              = " << total << endl ;
	  cout<< "Amount after 20% discount = " << discount << endl ;
	}
	if(total<200)
	{
	  cout << "Total Amount = " << total << endl ;
	}

}