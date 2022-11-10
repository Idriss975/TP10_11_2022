CC = clang++
FLAGS = -Wall -Wextra

Exec5: Ex5 runEx5
Exec6: Ex6 runEx6
Exec7: Ex7 runEx7
Exec8: Ex8 runEx8

Ex5 Ex5.cpp:
	$(CC) $(FLAGS) Ex5.cpp -o bin/Ex5.exe
runEx5:
	.\bin\Ex5.exe
	
Ex6 Ex6.cpp:
	$(CC) $(FLAGS) Ex6.cpp -o bin/Ex6.exe

runEx6:
	.\bin\Ex6.exe

Ex7 Ex7.cpp:
	$(CC) $(FLAGS) Ex7.cpp -o bin/Ex7.exe

runEx7:
	.\bin\Ex7.exe

Ex8 Ex8.cpp:
	$(CC) $(FLAGS) Ex8.cpp -o bin/Ex8.exe

runEx8:
	.\bin\Ex8.exe