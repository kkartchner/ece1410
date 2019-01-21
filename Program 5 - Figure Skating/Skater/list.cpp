#include "List.h"

using namespace std;
List::List()
{
	head = NULL;												
}

/*****************************************************************************
* Function Title: addSkater
*
* Summary: Adds a skater to the linked list by score, so that the list goes from
* highest score to lowest.
*
* Inputs: country (name of the Skater's country), score (Skater's score)
* Outputs: none
******************************************************************************/
void List::addSkater(string country, float score)								// Psuedocode
{																				// Begin
	Skater *p, *cur, *prev;														//	 Declare variables to be used
	p = new Skater(country, score);												//	 Create new Skater

	for (cur = head, prev = NULL;												//	 Find where to place the new skater in the list
		cur != NULL && p->getScore() < cur->getScore();
		prev = cur, cur = cur->getNext());

	p->setNext(cur);															//	 Insert the Skater into the list where it should go
	if (prev == NULL) {
		head = p;
	}
	else {
		prev->setNext(p);
	}

	cout << p->getCountry() << " added to rankings." << endl;					//	 Print success message
}																				// End

/*****************************************************************************
* Function Title: printList
*
* Summary: Prints out each Skater in the linked list's score and country in 
* order.
*
* Inputs: none
* Outputs: none
******************************************************************************/
void List::printList()															// Psuedocode
{																				// Begin
	Skater *cur;																//		 Declare cur as a pointer to class Skater
	cout << "\n|------Rankings-----|" << endl;									//		 Print rankings header
	if (head == NULL) {															//		 If the skater list is empty
		cout << "No teams have been added." << endl;							//				Print "list empty" message
	} else {																	//		 Else
		for (cur = head; cur != NULL; cur = cur->getNext()) {					//				Loop through the linked list using "cur"
			cout << cur->getCountry() << "\t" << cur->getScore() << endl;		//					Print cur skater's information
		}																		//				End Loop
	}																			//		 End If
}																				// End

/*****************************************************************************
* Function Title: ~List
*
* Summary: Destructor deletes each Skater in the list.
*
* Inputs: none
* Outputs: none
******************************************************************************/
List::~List()																	// Psuedocode
{																				// Begin
	Skater *temp = NULL;														//		 Declare cur and temp as pointers to Skater class 
	while (head != NULL) {														//		 Loop through the list using cur and temp
		temp = head; head = head->getNext();									//			 Set temp to cur and cur to cur.getNext()
		delete (temp);															//			 Delete temp
	}																			//		 End Loop
	cout << "Exiting program ...";												//		 Print exit message
}																				// End
