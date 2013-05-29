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
	//Pointer der auf ein Listenelement zeigt
	ListElement *reservierterSpeicher;

	reservierterSpeicher = new ListElement(t,0,0);


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

