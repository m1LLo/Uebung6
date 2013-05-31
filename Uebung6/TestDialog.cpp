/**
 * Klasse verwaltet die Kommunikation zwischen Benutzer und einer
 * "Verketteten Liste". Enthaelt Methoden die:
 *  - GUI Ausgeben
 *  - Benutzereingaben einliest
 *	
 * @file:		TestDialog.cpp
 * @date: 		28.05.2013
 * @author:	 	Markus Leitz (3543994)
 */

#include "TestDialog.h"

void TestDialog::hauptMenueAusgeben()
{
	int benutzerAuswahl = 9;

	do
	{
		//Ausgabe Benutzerfuehrung
		hauptMenueGuiAusgeben();

		//Benutzereingabe
		cin >> benutzerAuswahl;

		switch (benutzerAuswahl)
		{

		case ElementVornAnhaengen:
		{
			doppeltVerketteteListe.push_front(elementInhaltEinlesen());
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
			benutzerAuswahl = 0;
			break;
		}

		default:
		{
			cout << "Falsche Eingabe" << endl;
			break;
		}
		}
	} while (benutzerAuswahl != 0);

}

void TestDialog::hauptMenueGuiAusgeben()
{
	cout << "----------HAUPTMENUE----------" << endl;
	cout << "ERSTELLEN:" << endl;
	cout << "Element vorne anhaengen:        1" << endl;
	cout << "Element hinten anhaengen:       2" << endl;
	cout << "Element vor Stelle X einfuegen: 3" << endl << endl;

	cout << "LOESCHEN:" << endl;
	cout << "Letztes Element loeschen:       4" << endl;
	cout << "Erstes Element loeschen:        5" << endl;
	cout << "An Stelle X Element loeschen:   6" << endl;
	cout << "Komplette Liste loeschen:       7" << endl << endl;

	cout << "ANZEIGEN:" << endl;
	cout << "Liste Anzeigen:                 8" << endl << endl;

	cout << "PROGRAMM BEENDEN:               0" << endl;
}

InhaltTyp TestDialog::elementInhaltEinlesen()
{
	InhaltTyp elementInhalt;
	cout << "Bitte geben Sie denn Inhalt des Elements ein: ";
	cin >> elementInhalt;

	return elementInhalt;
}
