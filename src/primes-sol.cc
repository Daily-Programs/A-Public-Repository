#include <iostream>
#include <cmath>
using namespace std;

/* print all primes: 2 <= prime < limit */
void primes(int limit)
{
    int i, j;

    if (limit < 2)
    {
	cout << "INVALID INPUT: " << limit << endl;
	return;
    }  /* endif */

    cout << "primes < " << limit << ": ";
    for (i = 2; i < limit; i ++)
    {
	int is_prime = 1;
	int root = sqrt(i);
	for (j = 2; is_prime && j <= root; j ++)
	    is_prime = i % j;
	if (is_prime) 
	    cout << i << " ";
    } /* endfor */

    cout << endl;
    return;

} /* end primes() */
