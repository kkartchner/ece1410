#include <iostream>
#include "MyComplex.h"

MyComplex getComplexNumber(void);

using namespace std;
int main()
{
	MyComplex a, b;
	char selection = -1;																			

	cout << "Welcome to Complex Numbers Calc!" << endl;
	a = getComplexNumber();
	cout << "You entered "; a.printMyComplex(); cout << endl;

	while (selection != '0') {																		
		cout << "\nWhat would you like to do?" << endl; 													
		cout << "1. Add a number" << endl;
		cout << "2. Subtract a number" << endl;
		cout << "3. Multiply by a number" << endl;
		cout << "4. Clear" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter selection: "; cin >> selection;	

		if ('0' < selection && selection <= '3') {	b = getComplexNumber();	}

		switch (selection) {																			
		case '0': break;																			
		case '1':																					
			cout << "("; a.printMyComplex(); cout << ") + ("; b.printMyComplex(); cout << ")" << "\n=  "; a = a + b;
			break;
		case '2': 		
			cout << "("; a.printMyComplex(); cout << ") - ("; b.printMyComplex(); cout << ")" << "\n=  "; a = a - b;
			break;
		case '3':
			cout << "("; a.printMyComplex(); cout << ") * ("; b.printMyComplex(); cout << ")" << "\n=  "; a = a * b;
			break;
		case '4':
			a.setIPart(0); a.setRPart(0);
			cout << "Number cleared. Enter a new one:" << endl;
			a = getComplexNumber();
			break;
		default: cout << "Invalid selection. Enter one of the options below:" << endl;				
			break;
		}
		if ('0' < selection && selection <= '3') { a.printMyComplex(); cout << endl; }
	}

	return 0;
}

MyComplex getComplexNumber() 
{
	MyComplex temp; float rp, ip;

	cout << "\nEnter real part: "; cin >> rp;
	cout << "Enter imaginary part: "; cin >> ip;
	temp.setRPart(rp); temp.setIPart(ip);

	return temp;

}