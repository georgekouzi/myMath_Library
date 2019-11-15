
LIBFILE=basicMath.o power.o 
WALLGCC=gcc -Wall -g

 
mymaths: basicMath.o power.o 
	ar -rcs libmyMath.a $(LIBFILE)


mymathd: basicMath.o power.o
	$(WALLGCC) -shared $(LIBFILE) -o libmyMath.so

power.o: power.c myMath.h
	 $(WALLGCC) -c power.c

basicMath.o: basicMath.c myMath.h
	$(WALLGCC) -c basicMath.c

mains: main.o mymaths
	$(WALLGCC) -o mains main.o libmyMath.a

maind: main.o mymathd
	$(WALLGCC) -o maind main.o ./libmyMath.so

main.o: main.c myMath.h
	$(WALLGCC) -c main.c

all: mymaths mymathd mains maind main.o basicMath.o power.o 

clean:
	rm -f *.o *.a *.so maind mains
