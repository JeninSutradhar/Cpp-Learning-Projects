#include <iostream>

using namespace std;

int main() {
    const double USD_TO_INR = 74.31; // Exchange rate as of 14th April 2023
    
    double usd_amount, inr_amount;
    
    cout << "Enter the amount in US dollars (USD): ";
    cin >> usd_amount;
	
    inr_amount = usd_amount * USD_TO_INR;
    
    cout << usd_amount << " USD = " << inr_amount << " INR";
    
    return 0;
}
int dinar()  {
	const double DINAR_TO_INR = 300.33; 
	
	double dinar_amount, inr_amount;
	
	cout << "Enter the amount in Kuwaiti Dinar (Dinar): ";
	cin >> dinar_amount;
	
	inr_amount = dinar_amount * DINAR_TO_INR;
	
	cout << dinar_amount << " Dinar = " << inr_amount << " INR";
	
	return 0;
}