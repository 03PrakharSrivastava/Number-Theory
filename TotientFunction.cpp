#include<bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

const int mod=1e9+7;
const ll MOD=1e18;

const int N = 10000;

void totient1(){
vector<bool> prime(N,true);
vector<int> tot(N);

for(int i=2;i<N;i++){
    if(prime[i]==true){
    for(int j=i*i;j<N;j+=i){
      prime[j]=false;
    }
    }
}

iota(tot.begin(),tot.end(),0);

for(int i=2;i<N;i++){
    if(prime[i]==true){
        for(int j=i;j<N;j+=i){
              tot[j]/=i;
              tot[j]*=(i-1);
        }
    }
}

for(int i=2;i<=10;i++){
    cout<<i<<" "<<tot[i]<<"\n";
}

}

int main(){
faster;
totient1();

return 0;
}
