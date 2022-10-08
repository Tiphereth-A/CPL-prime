int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return (a && b) ? a / gcd(a, b) * b : 0; }
