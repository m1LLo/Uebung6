/**
 * 
 * @file	LinList.h
 * @author	folz
 * @date	20.05.2012
 */

#ifndef LINLIST_H_
#define LINLIST_H_
#include "ListElement.h"
#include <sstream>

/**
 * Doppelt-verkettete Lineare Liste.
 * 
 * @author	folz
 * @version 
 * @date	20.05.2012
 */
class LinList
{
public:

	//Klassenkonstannte
	static const int ERSTES_ELEMENT;
	static const char* STELLE_NICHT_VORHANDEN;
	static const char* LISTE_IST_LEER;

	/**
	 * Standard Konstruktor.
	 */
	LinList();

	/**
	 * Kopierkonstruktor erstelle eine tiefe Kopie der Liste.
	 *
	 * @param zuKopierendeListe
	 */
	LinList(const LinList &zuKopierendeListe);

	/**
	 * Destructor
	 */
	~LinList();

	/**
	 * Fuegt ein Element hinten an die Liste an.
	 *
	 * @param t			Inhalt des Elements
	 */
	void push_back(InhaltTyp t);

	/**
	 * Fuegt ein Element vorne an die Liste an.
	 *
	 * @param t			Inhalt des Elements
	 */
	void push_front(InhaltTyp t);

	/**
	 * Methode zum erstellen des ERSTEN Elements.
	 *
	 *
	 * @param t		Inhalt des Elements
	 */
	void push_first(InhaltTyp t);

	/**
	 * Fuegt eine Element VOR Stelle in die Liste ein.
	 *
	 * @param stelle		Stelle vor die Geschoben werden soll
	 * @param t				Inhalt des Elements
	 */
	void insert(int stelle, InhaltTyp t);

	/**
	 * Loescht letztes Element der Liste.
	 */
	void pop_back();

	/**
	 * Loescht erstes Element der Liste.
	 */
	void pop_front();

	/**
	 * Loescht alle Elemente der verketteten Liste
	 */
	void clean();

	/**
	 * Loescht einen Artikel an Stelle.
	 *
	 * @param stelle		Stelle an der geloescht werden soll.
	 */
	void erase(int stelle);

	/**
	 * Hilfe für einfuegen an Stelle und loeschen an Stelle.
	 * Findet Speicheradresse des gesuchten Elements.
	 *
	 * @param stelle		Stelle des gesuchten Elements
	 * @return	Adresse des gesuchten Elements
	 */
	ListElement* findeListenElement(int stelle);

	/**
	 * Gibt die Liste als String aus.
	 *
	 * @return			String der Listenelemente
	 */
	string toString() const;

	/**
	 *
	 * @param o
	 * @param liste
	 * @return
	 */
	friend ostream& operator<<(ostream& o, const LinList& liste);
	friend istream& operator>>(istream& in, LinList& list);

private:

	//Speichert die Anzahl an Elementen.
	size_t size;

	//Pointer auf das erste Element der Liste.
	ListElement* first;

	//Pointer auf das letzte Element der Liste.
	ListElement* last;
};

#endif /* LINLIST_H_ */
