CC=gcc
CFLAGS=-std=c99 -Wall

testcomparaison: testcomparaison.c jeu.h jeu.c
    # build the comparaison test
    $(CC) $(CFLAGS) $(TESTFLAGS) -o testcomparaison testcomparaison.c jeu.c

    # run the test, which will generate testcomparaison.gcna and testcomparaison.gcno
    ./testcomparaison

    # compute how test is covering testcomparaison.c
    gcov -c -p testcomparaison

clean:
	rm -f *.o test *.gcov *.gcda *.gcno

