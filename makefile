CC = gcc
FLAGS = -Wall -g
OBJECT_MAIN = main.o
ARCS = ar -rcs

all: recursived recursives loopd loops mains maindloop maindrec

mains: main.o libclassrec.a 
	$(CC) $(FLAGS) -o mains main.o libclassrec.a -lm

maindloop:main.o 
	$(CC) $(FLAGS) -o maindloop main.o ./libclassloops.so -lm

maindrec:main.o 
	$(CC) $(FLAGS) -o maindrec main.o ./libclassrec.so -lm

loops: libclassloops.a

recursives:libclassrec.a

recursived:libclassrec.so

loopd:libclassloops.so

libclassloops.a:basicClassification.o advancedClassificationLoop.o 
	$(ARCS) libclassloops.a basicClassification.o advancedClassificationLoop.o

libclassrec.a:basicClassification.o advancedClassificationRecursion.o
	$(ARCS) libclassrec.a basicClassification.o advancedClassificationRecursion.o  
	
libclassrec.so:basicClassification.o advancedClassificationRecursion.o
	$(CC) $(FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

libclassloops.so:basicClassification.o advancedClassificationLoop.o
	$(CC) $(FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c 

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c 

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c 	

.PHONY: clean

clean:
	rm -f *.o *.a *.so mains maindloop maindrec

