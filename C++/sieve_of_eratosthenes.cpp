// Sieve Of Eratosthenes
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void SieveOfEratosthenes(int n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
 
    for (int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p <<endl; 
}

int main() {
   int num;
   cout << "Enter the number :";
   cin >> num;
   SieveOfEratosthenes(num);
   return 0;
}
