# ali.c
Write a program, ali.c, that processes a stream of positive integers based their proper divisors. A divisor
of n is any smaller, positive integer that divides n without remainder. The aliquot sum, s(n), is the sum of
the proper divisors of n. An integer n is perfect if s(n) = n, it is deficient if s(n) < n, and it is abundant if
s(n) > n. ali should act as a filter , allowing integers that meet specific requirements to pass through. With no
switches ali is silent. The switches -d, -p, and -a select deficient, perfect, and abundant integers, respectively.
If the -1 switch is thrown, it selects primes. When two or more switches are thrown, the effect is to union the
selections.
