CC=gcc
AR=ar
MAIN=main.o
BASIC=basicClassification.o
LOOP=advancedClassificationLoop.o
RECURSION=advancedClassificationRecursion.o
FLAGS= -Wall -g

all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a 
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so 

#make mains
mains: $(MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(MAIN) libclassrec.a -lm

#make maindloop
maindloop: $(MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(MAIN) ./libclassloops.so -lm

#make maindrec
maindrec: $(MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(MAIN) ./libclassrec.so -lm


#make loopd
libclassloops.so: $(BASIC) $(LOOP)
	$(CC) -shared -o libclassloops.so $(BASIC) $(LOOP)

#make loopds
libclassloops.a: $(BASIC) $(LOOP)
	$(AR) -rcs libclassloops.a $(BASIC) $(LOOP)

#make recursived
libclassrec.so: $(BASIC) $(LOOP)
	$(CC) -shared -o libclassrec.so $(BASIC) $(LOOP)

#make recursives
libclassrec.a: $(BASIC) $(RECURSION)
	$(AR) -rcs libclassrec.a $(BASIC) $(RECURSION)


basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c -lm

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm

main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean

clean:
	rm -f main.o basicClassification.o advancedClassificationLoop.o advancedClassificationRecursion.o libclassrec.a libclassloops.a libclassrec.so libclassloops.so maindrec maindloop mains
