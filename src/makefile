CC = gcc
CFLAGS = -g
RM = /bin/rm

primes-sol: force
	$(CC) $(-CFLAGS) primes-main.cc
	$(CC) $(-CFLAGS) primes-sol.cc
	$(CC) $(-CFLAGS) -o primes-sol primes-main.o primes-sol.o


primes-stud: force
	$(CC) $(-CFLAGS) primes-main.cc
	$(CC) $(-CFLAGS) primes-stud.cc
	$(CC) $(-CFLAGS) -o primes-stud primes-main.o primes-stud.o

clean: force
	$(RM) -rf *.o primes-sol primes-stud

force:
