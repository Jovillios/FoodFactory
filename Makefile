# build
build: main
	rm -rf *.o
main: main.o pizza.o
	g++ -o main main.o pizza.o
main.o : src/main.cpp src/FoodFactory.h src/PizzaFactory.h
	g++ -c -Wall --std=c++17 src/main.cpp
pizza.o: src/Pizza.cpp src/Pizza.h
	g++ -c -Wall --std=c++17 src/Pizza.cpp

# clean
.PHONY: clean
clean:
	rm -rf main *.o