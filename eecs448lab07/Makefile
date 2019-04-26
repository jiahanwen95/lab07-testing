#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
Testing: main.o test.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o  test.o -o Testing


main.o: main.cpp 
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
test.o: test.h test.cpp
	g++ -g -Wall -std=c++11 -c test.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o test.o *.*~ Testing
