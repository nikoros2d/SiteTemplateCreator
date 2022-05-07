all:
	g++ src/main.cpp -static -static-libgcc -static-libstdc++ -o bin/Qucky

obj/src/test.o: tests/test.cpp
	g++ -c $(CCFLAGS) -o $@ $< -lm

obj/src/main_test.o: tests/main_test.cpp
	g++ -c $(CCFLAGS) -o $@ $< -lm

test: obj/src/test.o obj/src/main_test.o
	g++ $(LDLAGS) -o $@ $^ -lm -o bin/tests 
