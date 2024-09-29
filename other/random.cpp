/*
	Random Numbers
	
	Notes: random number generation with C++
*/

mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

template<typename T>
static T randint(T lo, T hi) { return uniform_int_distribution<T>(lo, hi)(rng); }
