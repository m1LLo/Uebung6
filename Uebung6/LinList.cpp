/**
 * Deklaration der Klasse LinList.
 * Speichert eine Linieare Liste.
 * @file	LinList.cpp
 * @author	folz
 * @date	20.05.2012
 */

#include "LinList.h"

const int LinList::ERSTES_ELEMENT = 1;
const char* LinList::STELLE_NICHT_VORHANDEN =
		"Die Angegebene Stelle ist nicht vorhanden!";
const char* LinList::LISTE_IST_LEER = "LEER";

LinList::LinList()
{
	this->first = 0;
	this->last = 0;
	this->size = 0;
}

LinList::~LinList()
{
	//Loescht nacheinander jedes Element des Liste
	clean();
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
	if (stelle > (this->size))
	{
		throw STELLE_NICHT_VORHANDEN;
	}

	if ((this->size) == 0)
	{
		push_first(t);
	}

	if (stelle == ERSTES_ELEMENT)
	{
		//Vorne anhaengen
		push_front(t);
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

void LinList::pop_back()
{
	if (this->size == 0)
	{
		throw LISTE_IST_LEER;
	}

	ListElement *vorletztesElement;
	vorletztesElement = (this->last)->previous;

	//Setzt den NextPointer des Vorletzen Elements auf NULL
	vorletztesElement->next = 0;

	delete (this->last);

	this->last = vorletztesElement;
	--(this->size);

}

void LinList::pop_front()
{
	if (this->size == 0)
	{
		throw LISTE_IST_LEER;
	}

	ListElement *pointerAufZweitesElement;
	pointerAufZweitesElement = (this->first)->next;

	delete (this->first);

	//Neues First-Element
	this->first = pointerAufZweitesElement;

	//Rueckpointer des neuen FirstElements auf NULL setzen.
	(this->first)->previous = 0;

	--(this->size);
}

void LinList::erase(int stelle)
{
	if (this->size == 0)
	{
		throw LISTE_IST_LEER;
	}

	if (stelle == 0)
	{
		throw STELLE_NICHT_VORHANDEN;
	}

	if (stelle > (this->size))
	{
		throw STELLE_NICHT_VORHANDEN;
	}

	ListElement *zuLoeschendesElement;
	ListElement *vorGaenger;
	ListElement *nachFolger;

	zuLoeschendesElement = findeListenElement(stelle);

	if (zuLoeschendesElement == (this->last))
	{
		pop_back();
	}

	if (zuLoeschendesElement == (this->first))
	{
		pop_front();
	}

	else
	{
		vorGaenger = zuLoeschendesElement->previous;
		nachFolger = zuLoeschendesElement->next;

		vorGaenger->next = nachFolger;
		nachFolger->previous = vorGaenger;

		delete zuLoeschendesElement;

		--(this->size);
	}
}

void LinList::clean()
{
	//Nicht die Schnellste Variante zum Loeschen aber die schnellste zu
	//Programmieren
	for (int i = 1; i < (this->size); ++i)
	{
		pop_back();
	}

	delete this->first;
	delete this->last;
	this->size = 0;
}

ListElement* LinList::findeListenElement(int stelle)
{
	//Pointer zeigt auf das erste Element
	ListElement *pointerAufMomentanesElement;

	//Kontrolle von welcher Seite man schneller an das Element kommt.
	//Wenn Stelle in Linker haelfte liegt von links kommen also von first.
	if (stelle <= (this->size) / 2)
	{

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

		//Beim durchzaehlen muss bis ANZAHL-STELLE gezaehlt werden
		for (int i = 1; i <= ((this->size) - stelle); ++i)
		{
			pointerAufMomentanesElement = pointerAufMomentanesElement->previous;
		}

	}
	return pointerAufMomentanesElement;
}

string LinList::toString() const
{
	ostringstream o;

	ListElement *aktuellerPointer;
	aktuellerPointer = this->first;

	o << endl << "--------LINIEARE LISTE--------" << endl;

	if (this->size == 0)
	{
		o << endl << "             LEER             " << endl;
		return o.str();
	}

	o << endl << "START<-->";
	for (int i = 1; i <= (this->size); ++i)
	{
		o << aktuellerPointer->inhalt << "<-->";
		aktuellerPointer = aktuellerPointer->next;
	}

	o << "ENDE" << endl;
	return o.str();
}

ostream& operator<<(ostream& o, const LinList& liste)
{
	return o << liste.toString();
}

//Funktioniert nicht und ist nicht fertig
//LinList::LinList(const LinList& zuKopierendeListe)
//{
//	if(zuKopierendeListe.size == 0)
//	{
//		throw LISTE_IST_LEER;
//	}
//
//	LinList neueListe;
//	neueListe.size = zuKopierendeListe.size;
//
//	ListElement *erstesElement;
//	ListElement *erstelltesElement;
//
//	erstesElement = new ListElement(zuKopierendeListe.first->inhalt,0,0);
//	erstelltesElement = erstesElement;
//
//	for (int i = 1; i <= zuKopierendeListe.size; ++i)
//	{
//		erstelltesElement = new ListElement(zuKopierendeListe ,erstelltesElement)
//	}
//
//}

istream& operator>>(istream& in, LinList& list)
{

	return in;
}

