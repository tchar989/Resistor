OPTS = -g -c -Wall -Werror
all: Resistor clean
Resistor: Resistor.o
	g++ -o Resistor Resistor.o
Resistor.o: Resistor.cc
	g++ $(OPTS) Resistor.cc
clean: 
	rm -f *.o *~