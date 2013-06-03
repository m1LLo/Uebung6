/**
 * TODO
 *	
 * @file:		MenuDialog.h
 * @date: 		03.06.2013
 * @author:	 	Markus Leitz (3543994)
 */

#ifndef MENUDIALOG_H_
#define MENUDIALOG_H_

#include <iostream>
#include "LinList.h"
#include "TestDialog.h"
#include "AutoTest.h"

/**
 * @author Markus Leitz (3543994)
 * @version
 * @date 03.06.2013
 */
class MenuDialog
{
	static const int AUTO_TEST;
	static const int MANUELLER_TEST;
	static const int BEENDEN;
public:

	MenuDialog();
	~MenuDialog();

};

#endif /* MENUDIALOG_H_ */
