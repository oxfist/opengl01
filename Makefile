test1: test01.cpp
	g++ test01.cpp -o test1 -lglut

test2: test02.cpp
	g++ test02.cpp -o test2 -lglut

test3: test03.cpp
	g++ test03.cpp -o test3 -lglut

all: test1 test2 test3

clean:
	rm -f test1 test2 test3
