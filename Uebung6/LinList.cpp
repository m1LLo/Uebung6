/**
 * 
 * @file	LinList.cpp
 * @author	folz
 * @date	20.05.2012
 */

#include "LinList.h"

LinList::LinList()
{
	this->first = 0;
	this->last = 0;
	this->size = 0;
}

LinList::~LinList()
{
	//Komplette Liste Loeschen
}

//Fuegt Element hinten an.
void LinList::push_back(InhaltTyp t)
{
	ListElement *reservierterSpeicher;

	if (this->size == 0)
	{
		//Erstes Element erstellen mit Inhalt t. previous = 0 & next = 0.
		reservierterSpeicher = new ListElement(t, 0, 0);

		//Pointer auf das erste Element und das letzte Element zeigen auf das
		//gleiche Element
		this->first = reservierterSpeicher;
		this->last = reservierterSpeicher;

		//Die Anzahl der Knoten wird um eins erhoeht.
		++(this->size);
	}

	else
	{
		//Da hinten angehongen wird ist das voherige Element das last aus
		//LinList und das next zeigt auf NULL.
		reservierterSpeicher = new ListElement(t, this->last, 0);

	}
//Pointer der auf ein Listenelement zeigt

}

void LinList::push_front(InhaltTyp t)
{
}

void LinList::pop_back()
{
}

void LinList::pop_front()
{
}

