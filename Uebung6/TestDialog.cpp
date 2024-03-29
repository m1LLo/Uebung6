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

TestDialog::TestDialog()
{
}

TestDialog::~TestDialog()
{
}

void TestDialog::hauptMenueAusgeben()
{
	int benutzerAuswahl = 9;

	do
	{
		try
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
				doppeltVerketteteListe.push_back(elementInhaltEinlesen());
				break;
			}

			case ElementAnStelleEinfuegen:
			{
				doppeltVerketteteListe.insert(stelleEinlesen(),
						elementInhaltEinlesen());
				break;
			}

			case LetztesElementLoeschen:
			{
				doppeltVerketteteListe.pop_back();
				break;
			}

			case ErstesElementLoeschen:
			{
				doppeltVerketteteListe.pop_front();
				break;
			}

			case ElementAnStelleLoeschen:
			{
				doppeltVerketteteListe.erase(stelleEinlesen());
				break;
			}

			case KompletteListeLoeschen:
			{
				doppeltVerketteteListe.clean();
				break;
			}
			case ListeAnzeigen:
			{
				cout << doppeltVerketteteListe.toString();
				break;
			}
			case 14:
				break;
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
		} catch (const char* e)
		{
			cout << endl << e << endl;
		}
	} while (benutzerAuswahl != 0);

}

void TestDialog::hauptMenueGuiAusgeben()
{
	cout << endl << "----------HAUPTMENUE----------" << endl;
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

	cout << "PROGRAMM BEENDEN:               0" << endl << endl;

	cout << "AUSWAHL: ";
}

InhaltTyp TestDialog::elementInhaltEinlesen()
{
	InhaltTyp elementInhalt;
	cout << "Bitte geben Sie denn Inhalt des Elements ein: ";
	cin >> elementInhalt;

	return elementInhalt;
}

int TestDialog::stelleEinlesen()
{
	int stelle = 0;
	cout << "Bitte geben Sie die Stelle ein: ";
	cin >> stelle;
	return stelle;
}
