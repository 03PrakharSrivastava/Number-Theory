#include<bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long ll;

const int mod=1e9+7;
const ll MOD=1e18;
// a>b
vector<int> extendedEuclid(int a,int b){

if(b==0){
    return {1,0,a};
}

vector<int> res = extendedEuclid(b,a%b);
int smallx = res[0];
int smally = res[1];
int gcd = res[2];

int x = smally;
int y = smallx - (a/b)*smally;


return {x,y,gcd};
}

int main(){
faster;

int a,b;
cin>>a>>b;

auto arr = extendedEuclid(a,b);
for(auto it: arr) cout<<it<<" ";

return 0;
}
