CC = gcc
RM = /bin/rm

primes-sol: force
	$(CC) primes-main.cc
	$(CC) primes-sol.cc
	$(CC) -o primes-sol primes-main.o primes-sol.o


primes-stud: force
	$(CC) primes-main.cc
	$(CC) primes-stud.cc
	$(CC) -o primes-stud primes-main.o primes-stud.o

clean: force
	$(RM) -rf *.o primes-sol primes-stud

force:
