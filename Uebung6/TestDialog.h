/**
 * Einfach Klasse die verschiedenen Testaufgaben zum Testen der Klassen LinList
 * und ListElement enthaelt.
 *	
 * @file:		TestDialog.h
 * @date: 		28.05.2013
 * @author:	 	Markus Leitz (3543994)
 */

#ifndef USERDIALOG_H_
#define USERDIALOG_H_

#include <iostream>
using namespace std;

enum benutzerAuswahl
{
	ElementVornAnhaengen,
	ElementHintenAnhaengen,
	ElementAnStelleEinfuegen,
	LetztesElementLoeschen,
	ErstesElementLoeschen,
	ElementAnStelleLoeschen,
	KompletteListeLoeschen,
	ProgrammBeenden,

};

/**
 * @author Markus Leitz (3543994)
 * @version 1.0
 * @date 28.05.2013
 */
class UserDialog
{
public:

	/**
	 * Gibt das Menue zur Benutzersteuerung aus und liest eine Auswahl ein.
	 */
	void hauptMenueAusgeben();

private:

	/**
	 * Beinhaltet nur das GUI für die Benutzerfuehrung.
	 */
	void hauptMenueGuiAusgeben();
};

#endif /* USERDIALOG_H_ */
