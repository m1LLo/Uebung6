/**
 * TODO
 *	
 * @file:		MenuDialog.cpp
 * @date: 		03.06.2013
 * @author:	 	Markus Leitz (3543994)
 */

#include "MenuDialog.h"

const int MenuDialog::AUTO_TEST = 1;
const int MenuDialog::MANUELLER_TEST = 2;
const int MenuDialog::BEENDEN = 0;

MenuDialog::MenuDialog()
{
	cout << "Automatischer Test: 1" << endl;
	cout << "Manueller Test:     2" << endl;
	cout << "Beenden:            0" << endl << endl;

	int benutzerEingabe = 1;
	cout << "Auswahl: ";
	//cin >> benutzerEingabe;

	switch (benutzerEingabe)
	{
	case AUTO_TEST:
	{
		AutoTest autoTest;
		break;
	}
	case MANUELLER_TEST:
	{
		TestDialog dialog;
		dialog.hauptMenueAusgeben();
		break;
	}
	case BEENDEN:
	{
		cout << "Programm wird beendet!" << endl;
		break;
	}
	default:
	{
		cout << "FALSCHE EINGABE" << endl;
		break;
	}
	}
}

MenuDialog::~MenuDialog()
{
}
