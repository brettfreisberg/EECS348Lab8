all: lab8Program1 lab8Program2

lab8Program1: lab8Program1.c
	gcc -o lab8Program1 lab8Program1.c

lab8Program2: lab8Program2.c
	gcc -o lab8Program2 lab8Program2.c

clean:
	del lab8Program1.exe lab8Program2.exe
