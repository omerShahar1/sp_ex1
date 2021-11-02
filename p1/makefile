CC = gcc
AR = ar
FLAGS = -Wall -g

all: prog NumClass.o libclassloops.a libclassrec.a libclassloops.so libclassrec.so maindloop.o maindrec.o mains.o
#make all
prog: mains.o maindloop.o maindrec.o
	$(CC) $(FLAGS) -o prog maindloop
	$(CC) $(FLAGS) -o prog maindrec
	$(CC) $(FLAGS) -o prog mains
#loop
NumClass.o: basicClassification.c advancedClassificationLoops.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
	$(CC) $(FLAGS) -c advancedClassificationLoops.c
#make loops
libclassloops.a: NumClass.o
	$(AR) -rcs libclassloops.a NumClass.O
#make loopd
libclassloops.so: NumClass.o
	$(CC) -shared -o libclassloops.a NumClass.O
#recursive
NumClass.o: basicClassification.c advancedClassificationRecursive.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c 
	$(CC) $(FLAGS) -c advancedClassificationRecursive.c
#make recursives
libclassrec.a: NumClass.o
	$(AR) -rcs libclassrec.a NumClass.O
#make recursived
libclassrec.so: NumClass.o
	$(CC) rcu libclassrec.a NumClass.o
#make maindloop
maindloop.o: main.c libclassloops.so
	$(CC) $(FLAGS) -c main.c
#make maindrec
maindrec.o: main.c libclassrec.so
	$(CC) $(FLAGS) -c main.c
#make mains
mains.o: main.c libclassrec.a
	$(CC) $(FLAGS) -c main.c
#make clean
clean:
	rm -f prog mains.o maindloop.o maindrec.o libclassloops.a libclassloops.so libclassrec.a libclassrec.so NumClass.o




