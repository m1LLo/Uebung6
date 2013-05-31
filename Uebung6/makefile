# makefile
# Created on: 21.05.2012
#     Author: folz

CFLAGS =  -g -std=c++0x -pedantic -Wall
DELOBJ = *.o
all: LinListTst

LinListTst: LinListTst.cpp LinList.o ListElement.o TestDialog.o

LinList.o: LinList.cpp LinList.h ListElement.h

ListElement.o: ListElement.cpp ListElement.h

TestDialog.o: TestDialog.cpp TestDialog.h

-include ../make-rules

#LOESCHT alte Objekte
clean:
	@echo "Folgende Daten werden geloescht"
	@echo $(DELOBJ)
	rm  $(DELOBJ)
	