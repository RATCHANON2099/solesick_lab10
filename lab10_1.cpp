#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double pre, ps, paid;

	cout << "Enter initial loan: ";
	cin >> pre;
	cout << "Enter interest rate per year (%): ";
	cin >> ps;
	cout << "Enter amount you can pay per year: ";
	cin >> paid;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	double newbalance, total;
	newbalance= pre;
	int i=0;

	while(newbalance>0){
		i++;
	cout << setw(13) << left << i; 
	cout << setw(13) << left << newbalance;
	cout << setw(13) << left << newbalance*(ps/100);
	cout << setw(13) << left << newbalance+newbalance*(ps/100);
	total=newbalance+newbalance*(ps/100);
	if(paid>total){
		paid=total;
	}

	cout << setw(13) << left << paid;
	cout << setw(13) << left << total-paid;
	newbalance=total-paid;
	cout << "\n";	
	}
	
	return 0;
}
