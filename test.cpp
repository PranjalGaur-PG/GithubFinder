#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
#define rep(i,a,b) for(i=a;i<b;i++)
typedef long long ll;
typedef unsigned long long ull;
#define test(t) int t; cin>>t; while(t--)

bool fun(int n) {
  unordered_set<int> st;

  int cp = n;
  while(cp>0) {
    st.insert(cp%10);
    cp /= 10;
  }

  cp = n;
  while(cp>10) {
    st.insert(cp%100);
    cp /= 10;
  }

  if((st.find(2) != st.end()) || (st.find(14) != st.end())) return true;
  return false;
}

int main()
{
    IOS;
    int n;
    cin>>n;

    int i=1;

    while(i != n) {
      if(fun(i)) n++;
      i++;
    }

    cout<<i;
    return 0;
}