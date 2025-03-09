#include<iostream>
#include<bits/stdc++.h>
using namespace std;

uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m){
	int64_t res = 0;
	
	while( a != 0 ){
		if (a & 1)
			res = (res+a) % m;

		a >>= 1;
		b = (b << 1) % m;
	}

	return res;
}

uint64_t powMod(uint64_t a, uint64_t b, uint64_t n){
	uint64_t x = 1;

	a %= n;

	while (b > 0){
		if ( b % 2 ==  1 )
			x = mulmod(x, a, n);
		
		 a = mulmod(a, a, n);
		 b >>= 1;
	}

	return x % n;
}

std::vector<int> first_primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
                                    31, 37, 41, 43, 47, 53, 59, 61, 67,
                                    71, 73, 79, 83, 89, 97, 101, 103,
                                    107, 109, 113, 127, 131, 137, 139,
                                    149, 151, 157, 163, 167, 173, 179,
                                    181, 191, 193, 197, 199, 211, 223,
                                    227, 229, 233, 239, 241, 251, 257,
                                    263, 269, 271, 277, 281, 283, 293,
                                    307, 311, 313, 317, 331, 337, 347, 349 };



