#include <iostream>
#include <cmath>

using namespace std;
long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    return result;
}
int main() {
    long long p = 23; // A prime number
    long long g = 5;  // A primitive root modulo p
    cout << "Public values: p = " << p << ", g = " << g << endl;
    long long a = 6; // Private key for Alice
    long long b = 15; // Private key for Bob
    long long A = power(g, a, p); // Alice's public key
    long long B = power(g, b, p); // Bob's public key
    cout << "Alice's public key (A): " << A << endl;
    cout << "Bob's public key (B): " << B << endl;
    long long sharedSecretAlice = power(B, a, p); // Alice computes shared secret
    long long sharedSecretBob = power(A, b, p);  // Bob computes shared secret

    cout << "Shared secret computed by Alice: " << sharedSecretAlice << endl;
    cout << "Shared secret computed by Bob: " << sharedSecretBob << endl;

    if (sharedSecretAlice == sharedSecretBob) {
        cout << "Key exchange successful! Shared secret: " << sharedSecretAlice << endl;
    } else {
        cout << "Key exchange failed!" << endl;
    }
    return 0;
}
