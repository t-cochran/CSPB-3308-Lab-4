CC = g++
OBJS = om_nom_nom.o basket.o

all: $(OBJS)
	$(CC) basket.o om_nom_nom.o -o om_nom_nom

om_nom_nom.o: om_nom_nom.cpp
	$(CC) -c om_nom_nom.cpp

basket.o: basket.cpp
	$(CC) -c basket.cpp

run:
	@./om_nom_nom

clean:
	rm -f om_nom_nom *.o *~
