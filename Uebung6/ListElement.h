/**
 * Klasse für
 * @file	ListElement.h
 * @author	folz
 * @date	20.05.2012
 */

#ifndef LISTELEMENT_H_
#define LISTELEMENT_H_
#include <string>
using namespace std;
typedef string InhaltTyp;

/**
 * Listenelement fuer eine doppelt-verkettete Lineare Liste
 * 
 * @author	folz
 * @version 
 * @date	20.05.2012
 */
class ListElement
{
public:

	/**
	 * Erstellt eine Objekt vom Typ ListElement.
	 *
	 * @param InhaltTyp			Inhalt des ListenElements
	 * @param ListElement		Pointer auf den Vorhänger
	 * @param ListElement		Pointer auf den Nachfolger
	 */
	ListElement(InhaltTyp, ListElement* = 0, ListElement* = 0);

	/**
	 * Kopierkonstruktor kopiert ein uebergebenes Element
	 *
	 * @param zuKopierenesElement		ListElement das kopiert werden soll.
	 */
	ListElement(const ListElement &zuKopierenesElement);

	/**
	 * Destructor.
	 */
	~ListElement();

	/**
	 * Zuweisungs-Operator fue ListElement.
	 *
	 * @param zuWeisendesElement	Vorlagen Element
	 * @return
	 */
	ListElement &operator=(const ListElement &zuWeisendesElement);

	/**
	 * LinList ist Freund und darf direkt auf ListElement zugreifen.
	 * Verwendet in toString Mehtode
	 */
	friend class LinList;

private:
	//Inhalt des Elements
	InhaltTyp inhalt;

	//Vorgaeger des Elements
	ListElement* previous;

	//Nachfolger des Elements
	ListElement* next;
};

#endif /* LISTELEMENT_H_ */
