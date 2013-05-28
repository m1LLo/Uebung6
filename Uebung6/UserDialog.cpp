/**
 * TODO
 *	
 * @file:		UserDialog.cpp
 * @date: 		28.05.2013
 * @author:	 	Markus Leitz (3543994)
 */

#include "UserDialog.h"

void UserDialog::hauptMenueAusgeben()
{
	int benutzerAuswahl = 0;

	//Ausgabe Benutzerfuehrung
	hauptMenueGuiAusgeben();

	//Benutzereingabe
	cin >> benutzerAuswahl;

	switch (benutzerAuswahl)
	{

	case ElementVornAnhaengen:
	{
		break;
	}

	case ElementHintenAnhaengen:
	{
		break;
	}

	case ElementAnStelleEinfuegen:
	{
		break;
	}

	case LetztesElementLoeschen:
	{
		break;
	}

	case ErstesElementLoeschen:
	{
		break;
	}

	case ElementAnStelleLoeschen:
	{
		break;
	}

	case KompletteListeLoeschen:
	{
		break;
	}

	case ProgrammBeenden:
	{
		break;
	}

	default:
	{
		cout << "Falsche Eingabe" << endl;
		break;
	}
	}

}

void UserDialog::hauptMenueGuiAusgeben()
{
	cout << "----------HAUPTMENUE----------" << endl;
	cout << "ERSTELLEN:" << endl;
	cout << "Element vorne anhaengen:        1" << endl;
	cout << "Element hinten anhaengen:       2" << endl;
	cout << "Element vor Stelle X einfuegen: 3" << endl << endl;

	cout << "LOESCHEN:" << endl;
	cout << "Letztes Element loeschen:       4" << endl;
	cout << "Erstes Element loeschen: 		 5" << endl;
	cout << "An Stelle X Element loeschen:   6" << endl;
	cout << "Komplette Liste loeschen:		 7" << endl << endl;

	cout << "PROGRAMM BEENDEN:        		 0" << endl;
}
