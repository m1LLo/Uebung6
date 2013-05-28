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
	 * Loescht letztes Element der Liste.
	 */
	void pop_back();

	/**
	 * Loescht erstes Element der Liste.
	 */
	void pop_front();

	friend ostream& operator<<(ostream&, const LinList&);

private:

	//Speichert die Anzahl an Elementen.
	size_t size;

	//Pointer auf das erste Element der Liste.
	ListElement* first;

	//Pointer auf das letzte Element der Liste.
	ListElement* last;
};

#endif /* LINLIST_H_ */
