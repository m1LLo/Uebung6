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
#include "ListElement.h"
#include "LinList.h"
using namespace std;

enum benutzerAuswahl
{
	ElementVornAnhaengen = 1,
	ElementHintenAnhaengen,
	ElementAnStelleEinfuegen,
	LetztesElementLoeschen,
	ErstesElementLoeschen,
	ElementAnStelleLoeschen,
	KompletteListeLoeschen,
	ListeAnzeigen,
	ProgrammBeenden = 0,

};

/**
 * @author Markus Leitz (3543994)
 * @version 1.0
 * @date 28.05.2013
 */
class TestDialog
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

	/**
	 * Liest Inhalt des Elements ein.
	 * Keine Fehlerueberpruefung da Inhalt nicht definiert ist.
	 */
	InhaltTyp elementInhaltEinlesen();

	/**
	 * Liest die Stelle fuer Einfuegen ein und gibt sie zurueck.
	 * Laesst nur Integer durch.
	 *
	 * @return 		Stelle zum Einfuegen
	 */
	int stelleEinlesen();

	LinList doppeltVerketteteListe;
};

#endif /* USERDIALOG_H_ */
