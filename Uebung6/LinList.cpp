/**
 * 
 * @file	LinList.cpp
 * @author	folz
 * @date	20.05.2012
 *
 * NOTIZ: DIE POINTER VON DEN VOHER ODER NACHHER ELEMENTEN MUESSEN NOCH
 * UMGESTELLT WERDEN!!!
 */

#include "LinList.h"

const int ERSTES_ELEMENT = 1;

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
	if (this->size == 0)
	{
		//Erstellt das ERSTE Element
		push_first(t);
	}

	else
	{
		ListElement *reservierterSpeicher;

		//Da hinten angehongen wird ist das voherige Element das last aus
		//LinList und das next zeigt auf NULL.
		reservierterSpeicher = new ListElement(t, this->last, 0);

		//Veraendert den Pointer des voherigen Elements von NULL auf das neue
		//Element
		(this->last)->next = reservierterSpeicher;

		//Der Pointer auf das letzte Element muss veraendert werden da
		//hinten angehongen wird
		this->last = reservierterSpeicher;

	}

	//Die Anzahl der Knoten wird um eins erhoeht.
	++(this->size);
}

void LinList::push_front(InhaltTyp t)
{

	if (this->size == 0)
	{
		//Erstellt das ERSTE Element
		push_first(t);
	}

	else
	{
		ListElement *reservierterSpeicher;

		//Da vorne angehongen wird ist das naechste Element das first aus
		//LinList und das previous zeigt auf NULL.
		reservierterSpeicher = new ListElement(t, 0, this->first);

		//Das ehemalige Erste Element zeigt jetzt von NULL auf das neue Element
		this->first->previous = reservierterSpeicher;

		//Der Pointer auf das erste Element muss veraendert werden da
		//vorne angehongen wird
		this->first = reservierterSpeicher;
	}

	//erhoeht die Anzahl
	++(this->size);
}

void LinList::pop_back()
{
}

void LinList::push_first(InhaltTyp t)
{
	//Zeiger auf neu anzulegenenden Speicherplatz
	ListElement *reservierterSpeicher;

	//Erstes Element erstellen mit Inhalt t. previous = 0 & next = 0.
	reservierterSpeicher = new ListElement(t, 0, 0);

	//Pointer auf das erste Element und das letzte Element zeigen auf das
	//gleiche Element
	this->first = reservierterSpeicher;
	this->last = reservierterSpeicher;

}

void LinList::insert(int stelle, InhaltTyp t)
{
	if (this->size == 0)
	{
		push_first(t);
	}

	else
	{
		if (stelle == ERSTES_ELEMENT)
		{
			//Vorne anhaengen
			push_front(t);
		}

		//NICHT SICHER OB NICHT BESSER FEHLERMELDUNG AUSWERFEN WEIL ANZAHL
		//UEBERSCHRITTEN WURDE
		if (stelle == (this->size) + 1)
		{
			//hinten anhaengen
			push_back(t);
		}

		if (stelle > ERSTES_ELEMENT)
		{
			ListElement *reservierterSpeicher;
			ListElement *previous;
			ListElement *next;

			reservierterSpeicher = new ListElement(t, previous, next);
		}

	}
}

void LinList::pop_front()
{
}

ListElement* LinList::findeListenElement(int stelle)
{

	//Kontrolle von welcher Seite man schneller an das Element kommt
	if (stelle <= (this->size) / 2)
	{
		for (int i = 1; i <= stelle; ++i)
		{
			ListElement *pointerAufMomentanesElement;
		}
	}
	return 0;
}
