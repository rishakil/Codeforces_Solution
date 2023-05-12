#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   ll q;
   cin >> q;

   multiset<ll> se;
   stack<ll> st;
   while (q--) {
      int type, x;
      cin >> type;
      if (type == 1) {
         cin >> x;
         se.insert(x);
         st.push(x);
      }
      else if (type == 2) {
         auto it = st.top();
         se.erase(se.find(it));
         st.pop();
      }
      else {
         auto it = se.end();
         cout << *(--it) << '\n';
      }
   }
}