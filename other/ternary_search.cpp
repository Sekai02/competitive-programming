/*
	Ternary search

	Notes: Different ways of doing ternary-search for unimodal functions

	Complexity: O(log n)
*/

//ternary search in real numbers
double ternary_search(double l, double r) {
    double eps = 1e-9;              //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);      //evaluates the function at m1
        double f2 = f(m2);      //evaluates the function at m2
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    return f(l);                    //return the maximum of f(x) in [l, r]
}

//ternary search on integers
int lo = -1, hi = n;
while (hi - lo > 1){
    int mid = (hi + lo)>>1;
    if (f(mid) > f(mid + 1)) 
         hi = mid;
    else 
         lo = mid; 
}
//lo + 1 is the answer

//also check for adjacent values sometimes
