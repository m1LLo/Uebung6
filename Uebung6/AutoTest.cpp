/**
 * TODO
 *	
 * @file:		AutoTest.cpp
 * @date: 		03.06.2013
 * @author:	 	Markus Leitz (3543994)
 */

#include "AutoTest.h"

AutoTest::AutoTest()
{
	cout << endl << "AUTOTEST:" << endl;

	LinList liste1;
	cout << "Erstellen einer Liste: \t \t CHECK" << endl;

	try
	{
		liste1.push_back("alpha");

	}
	catch (const char* e)
	{
		cout << "FEHLER!" << endl;
		cout << e << endl;
	}

	cout << "'beta' Vorne anfuegen: \t \t CHECK" << endl;
	liste1.push_front("beta");

	cout << "'gamma' An Stelle 2 einfuegen: \t CHECK" << endl;
	liste1.insert(2, "gamma");

	cout << liste1;

	cout << endl << "LOESCHEN" << endl;
	cout << "Komplette Liste loeschen: \t \t CHECK" << endl;
	try
	{
		liste1.clean();
	} catch (const char* e)
	{
		cout << e;

	}

	cout << "Liste nach dem Loeschen" << endl;
	cout << liste1;

	cout << endl << "Erstellen von 5 Elementen" << endl;
	//liste1.push_back("Eins");
	liste1.push_back("Zwei");
	liste1.push_back("Drei");
	liste1.push_back("Vier");
	liste1.push_back("Fuenf");

	//cout << liste1;

	cout << endl << "Loeschen am Anfang der Liste: \t CHECK" << endl;
	liste1.pop_front();

	cout << liste1;

	cout << endl << "Loeschen am Ende der Liste: \t \t CHECK" << endl;
	liste1.pop_back();

	cout << liste1;

	cout << endl << "Loeschen an Stelle 2: \t \t CHECK" << endl;
	liste1.erase(2);

	cout << liste1;
}

AutoTest::~AutoTest()
{
}
