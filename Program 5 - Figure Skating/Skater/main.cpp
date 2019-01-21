#include "List.h"

/**************************************************************************************************
* Function Title: main
*
* Summary: Prints program instructions, loops through a menu until exited, and
* performs the menu functions based on user input.
*
* Inputs: none
* Outputs: none
**************************************************************************************************/
int main()																							// Psuedocode
{																									// Begin			
	char selection = -1;																			//		Declare variables to be used
	List skaterList;
	string country; float score;

	cout << "Welcome to Skater!" << endl;															//		Print program instructions	
	cout << "Use the options below to add teams and scores, view the rankings, or exit." << endl;
	while (selection != '0') {																				//		Loop until users selects "exit"			
		cout << "\nWhat would you like to do?" << endl; 											//			Print options menu										
		cout << "1. Add a new team and score" << endl;
		cout << "2. Print rankings" << endl;
		cout << "0. Exit" << endl;
		cout << "Enter selection: "; cin >> selection;							//			Get selection number and clear the buffer		
	
		switch (selection){																			//			Perform action based on number entered			
			case '0': break;																		//				Delete list of skaters
			case '1':																				//				Add a new team and score
				cout << "Enter team name: "; cin >> country;
				cout << "Enter their score: "; cin >> score;
				skaterList.addSkater(country, score);
				break;
			case '2': skaterList.printList();														//				Print Rankings
				break;
			default: cout << "Invalid selection. Enter one of the options below:" << endl;			//				Default print error
				break;
		}
	}																								//		End Loop																															
	return 0;																						//		Return default of zero when program run succesful																						
}																									// End