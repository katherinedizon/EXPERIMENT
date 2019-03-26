#include <iostream>
#include <iomanip>

using namespace std;
int main() {
	float avg, intr,interest, netbal, payment, d1, d2;
	std::cout << std::fixed;
    std::cout << std::setprecision(2);
	cout << "===CREDIT CARD INTEREST PROGRAM===\nNetBalance - balance shown in the bill\nPayment - payment made\nD1 - number of days in the billing cycle\nd2-number of days payment is made before billing cycle\n=========================================\n\n";
	cout << "Enter value for Net Balance:";
	cin >> netbal;
	cout << "Enter value for Payment:";
	cin >> payment;
	cout << "Enter value for Interest Rate in (%):";
	cin >> intr;
	cout << "Enter value for D1:";
	cin >> d1;
	cout << "Enter value for D2:";
	cin >> d2;
	avg = ((netbal*d1)-(payment*d2))/d1;
	interest = (avg*intr);
	cout << "Average Daily Balance: "<< avg << endl;
	cout << "Interest is: " << interest << endl;
	return 0;
}
