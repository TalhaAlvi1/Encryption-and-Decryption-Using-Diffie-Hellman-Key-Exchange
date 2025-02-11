# Objective
The Diffie-Hellman Key Exchange is a method of securely exchanging cryptographic keys over a public channel. It enables two parties to establish a shared secret key that can be used for encrypted communication.
# Algorithm
1. Select a large prime number \( p \) and a primitive root \( g \) of \( p \).
2. Both parties agree on \( p \) and \( g \). These values can be shared publicly.
3. Each party generates a private key:
   - Party A selects a private key \( a \).
   - Party B selects a private key \( b \).
4. Both parties compute their public keys:
   - Party A computes \( A = g^a \mod p \).
   - Party B computes \( B = g^b \mod p \).
5. Exchange public keys:
   - Party A sends \( A \) to Party B.
   - Party B sends \( B \) to Party A.
6. Compute the shared secret key:
   - Party A computes \( S = B^a \mod p \).
   - Party B computes \( S = A^b \mod p \).
   - Both computations result in the same shared secret key \( S \).
  
# Explanation
The Diffie-Hellman Key Exchange leverages modular arithmetic and the difficulty of solving discrete logarithms to securely establish a shared secret. The security of the algorithm relies on the computational infeasibility of deducing the private key from the public key, given the prime \( p \) and base \( g \).
This shared secret key can then be used for encryption and decryption in subsequent communication, ensuring confidentiality over an insecure channel.
