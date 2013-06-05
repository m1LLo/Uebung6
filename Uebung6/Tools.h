/**
 * TODO
 *	
 * @file:		Tools.h
 * @date: 		05.06.2013
 * @author:	 	Markus Leitz (3543994)
 */

#ifndef TOOLS_H_
#define TOOLS_H_

#include <sstream>
#include <iostream>
#include "LinList.h"
using namespace std;

/**
 * @author Markus Leitz (3543994)
 * @version
 * @date 05.06.2013
 */
class Tools
{
public:

	static const int ABSTAND_ZUM_RAND;
	static const char* ECK_ZEICHEN;
	static const char* TRENN_ZEICHEN;
	static const char* PFEIL_FORM_RECHTS;
	static const char* PFEIL_FORM_LINKS;

	/**
	 * Gibt die Trennlinie aus für die Gui.
	 * Trennlinie zwischen den Einzelnen Objektattributen.
	 *
	 * @param
	 * @return
	 */
	static string trennLinieZeichnen(int inhaltsBreite);

	/**
	 * Gibt die Obere oder Untere Kante der Element GUI aus.
	 * Breite passt sich dem Inhalt an.
	 *
	 * @param inhaltsBreite			Breite des zu umschliesenden Inhalts
	 * @return						Linie als String
	 */
	static string ausenKantenZeichnen(int inhaltsBreite);

	static string previousZeichnen(int inhaltsBreite);
	static string nextZeichnen(int inhaltsBreite);

};

#endif /* TOOLS_H_ */
