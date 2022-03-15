cd /autograder/source
CC = g++
RM = /bin/rm

primes-key: force
	$(CC) -c primes-main.cc
	$(CC) -c primes-key.cc
	$(CC) -o primes-key primes-main.o primes-key.o


primes-stud: force
	$(CC) -c primes-main.cc
	$(CC) -c primes-stud.cc
	$(CC) -o primes-stud primes-main.o primes-stud.o

clean: force
	$(RM) -rf *.o primes-key primes-stud

force:
