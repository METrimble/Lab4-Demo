CC=g++ -std=c++11
exe_file=lab4demo

$(exe_file): shelf.o book.o driver.cpp
	$(CC) shelf.o book.o driver.cpp -o $(exe_file)

shelf.o: shelf.cpp
	$(CC) -c shelf.cpp

book.o: book.cpp
	$(CC) -c book.cpp

clean:
	rm -f $(exe_file) *.o