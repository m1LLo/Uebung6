# makefile
# Created on: 21.05.2012
#     Author: folz

CFLAGS =  -g -std=c++0x -pedantic -Wall
DELOBJ = *.o
APPLICATION = LinListTst

all: LinListTst

LinListTst: LinListTst.cpp LinList.o ListElement.o TestDialog.o AutoTest.o\
			MenuDialog.o Tools.o

LinList.o: LinList.cpp LinList.h ListElement.h

ListElement.o: ListElement.cpp ListElement.h

TestDialog.o: TestDialog.cpp TestDialog.h

AutoTest.o: AutoTest.cpp AutoTest.h

MenuDialog.o: MenuDialog.cpp MenuDialog.h

Tools.o: Tools.cpp Tools.h

-include ../make-rules

#LOESCHT alte Objekte
clean:
	@echo "Folgende Daten werden geloescht"
	@echo $(DELOBJ)
	rm  $(DELOBJ)
	rm $(APPLICATION)
	