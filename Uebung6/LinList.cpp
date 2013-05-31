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

		++(this->size);

	}
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

		++(this->size);
	}

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

	++(this->size);

}

void LinList::insert(int stelle, InhaltTyp t)
{
	if (this->size == 0)
	{
		push_first(t);
	}

	else
	{
		//HIER SOLLTE EIGENTLICH ERSTES_ELEMENT STEHEN ABER DAS MOCHTE DER
		//COMPILER NICHT
		if (stelle > 1)
		{
			//NICHT SICHER OB NICHT BESSER FEHLERMELDUNG AUSWERFEN WEIL ANZAHL
			//UEBERSCHRITTEN WURDE
			if (stelle == ((this->size) + 1))
			{
				//hinten anhaengen
				push_back(t);
			}

			else
			{
				ListElement *neuesElement;
				ListElement *nachFolgeElement;

				//Ermittelt die Adresse des Elements vor dem eingefuegt werden
				//soll
				nachFolgeElement = findeListenElement(stelle);

				//Erstellt das neue Element mit Inhalt, Pointer vom Vorgaenger
				//des vom Element vor dem eingefuegt werden soll und dem Element
				//selbt.
				neuesElement = new ListElement(t, nachFolgeElement->previous,
						nachFolgeElement);

				//Veraendern der Pointer der Vorhaenger und Nachfolger des neuen
				//Elements
				nachFolgeElement->previous = neuesElement;
				(neuesElement->previous)->next = neuesElement;

				++(this->size);
			}
		}

		else
		{
			//Vorne anhaengen
			push_front(t);
		}

	}
}

void LinList::pop_front()
{
}

ListElement* LinList::findeListenElement(int stelle)
{
	ListElement *zuerstellendesElement;
	ListElement *pointerAufMomentanesElement;

	//Kontrolle von welcher Seite man schneller an das Element kommt.
	//Wenn Stelle in Linker haelfte liegt von links kommen also von first.
	if (stelle <= (this->size) / 2)
	{
		//Pointer zeigt auf das erste Element
		ListElement *pointerAufMomentanesElement;
		pointerAufMomentanesElement = this->first;

		for (int i = 1; i < stelle; ++i)
		{
			pointerAufMomentanesElement = pointerAufMomentanesElement->next;
		}

	}

	//von rechts kommen also von last
	else
	{
		pointerAufMomentanesElement = this->last;
		for (int i = 1; i < stelle; ++i)
		{
			pointerAufMomentanesElement = pointerAufMomentanesElement->previous;
		}

	}
	return pointerAufMomentanesElement;
}

string LinList::toString()
{
	ostringstream o;
	ListElement *aktuellerPointer;
	aktuellerPointer = this->first;

	for (int i = 1; i <= (this->size); ++i)
	{
		o << i << ". Element" << "\n";
		o << aktuellerPointer->inhalt << "\n" << "\n";
	}

	//OVERLOARD MUSS NOCH GEMACHT WERDEN!!!
	return o.str;
}
