#include<bits/stdc++.h>

using namespace std;
vector<int>primes;

const long long N = 2e5;
void sieve(){
    vector<bool>prime(N+1,true);
    prime[0] = false; prime[1] = false;
    for(long long i=2; i<=N; i++){
        if(prime[i]){
            for(long long j=i*i; j<=N; j+=i){
                prime[j] = false;
            }
        }
    }

    for(long long i=2; i<=N; i++){
        if(prime[i]) primes.push_back(i);
    }

}

int main(){
    sieve();
    int t; cin >> t;

    while(t--){
        
        long long d; cin >> d;
        long long num2, num3;

        num2 = *lower_bound(primes.begin(),primes.end(),1+d);
        num3 = *lower_bound(primes.begin(),primes.end(),num2+d);

        cout << min(num2*num3,num2*num2*num2) << endl;
    }
    
}