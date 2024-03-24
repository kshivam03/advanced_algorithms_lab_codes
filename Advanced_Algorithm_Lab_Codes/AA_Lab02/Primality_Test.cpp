#include <iostream>
#include <bits/stdc++.h>

using namespace std;

uint long long power(uint long long a, uint long long k, uint long long n){
    uint long long res = 1;
    while(k > 0){
        if(k % 2 == 1){
            res = (res * a) % n;
        }
        k /= 2;
        a = (a * a) % n;
    }
    return res;
}

uint long long gcd(uint long long a, uint long long n){
    uint long long r;
    while(n > 0){
        r = a % n;
        a = n;
        n = r;
    }
    return a;
}

int is_prime(uint long long n){
    int k = 100, count = 0;
    if(n == 2 || n == 3){
        return 1;
    }
    else if(n <= 1 || n % 2 == 0){
        cout << 1 << endl;
        return 0;
    }
    while(count < k){
        uint long long a = 2 + rand()%(n - 3);
        if(gcd(a, n) != 1){
            return 0;
        }
        if(power(a, n - 1, n) != 1){
            return 0;
        }
        count++;
    }
    return 1;
}

int main(){
    srand(time(0));
    uint long long n;
    cout << "Enter any Number : " << endl;
    cin >> n;
    if(is_prime(n)){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;
    }
}