/**
 * 
 * @file	ListElement.cpp
 * @author	folz
 * @date	20.05.2012
 */

#include "ListElement.h"

ListElement::ListElement(InhaltTyp inhalt, ListElement* previous,
		ListElement* next)
{
	this->inhalt = inhalt;
	this->previous = previous;
	this->next = next;
}

ListElement::ListElement(const ListElement& zuKopierenesElement)
{
	this->inhalt = zuKopierenesElement.inhalt;
	this->previous = 0;
	this->next = 0;
}

ListElement::~ListElement()
{
	/*
	 * Standard Destruktor reicht aus da die Pointer auf Objekte zeigen die nicht
	 * geloescht werden sollen.
	 */
}


ListElement &ListElement::operator=(const ListElement &zuWeisendesElement)
{
	//Selbst zuweisung verhindern!
	if(this == &zuWeisendesElement)
	{
		return *this;
	}
	return *this;
}

