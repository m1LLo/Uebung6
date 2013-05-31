/**
 * 
 * @file	LinList.h
 * @author	folz
 * @date	20.05.2012
 */

#ifndef LINLIST_H_
#define LINLIST_H_
#include "ListElement.h"

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
	/**
	 * Standard Konstruktor.
	 */
	LinList();

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
	 * Die Anzahl muss auserhalb hochgezaehlt werden.
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
	 * Hilfe für einfuegen an Stelle und loeschen an Stelle.
	 * Findet Speicheradresse des gesuchten Elements.
	 *
	 * @param stelle		Stelle des gesuchten Elements
	 * @return	Adresse des gesuchten Elements
	 */
	ListElement* findeListenElement(int stelle);


	//friend ostream& operator<<(ostream&, const LinList&);

private:

	//Klassenkonstannte für Erstes Element
	static const int ERSTES_ELEMENT;

	//Speichert die Anzahl an Elementen.
	size_t size;

	//Pointer auf das erste Element der Liste.
	ListElement* first;

	//Pointer auf das letzte Element der Liste.
	ListElement* last;
};

#endif /* LINLIST_H_ */
