all:maxi_test_V2.o maxi.o
	gcc -Wall -o exe maxi_test_V2.o maxi.o -lcunit -L /usr/local/lib
maxi_test_V2.o:maxi_test_V2.c
	gcc -c maxi_test_V2.c
maxi.o:maxi.c
	gcc -c maxi.c
