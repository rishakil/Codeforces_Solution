#include<bits/stdc++.h>
using namespace std;


void solve() 
{
   int q, ele;
   cin >> q;

   multiset<int> se;
   vector<int> v;
   while(q--) {

      int type, x;
      cin >> type;

      if(type == 1) {
         cin >> x;
         v.push_back(x);
         se.insert(x);
      } 
      else if(type == 2) {
         se.erase(se.find(v.back()));
         v.pop_back();
      }
      else {
         cout << *(--se.end()) << '\n';
      }
   }
   
}
int32_t main() {
   ios_base::sync_with_stdio(false);
   //int tc; cin >> tc; while(tc--)
   solve();
}