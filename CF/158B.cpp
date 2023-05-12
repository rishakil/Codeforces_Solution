#include <bits/stdc++.h>
using namespace std;

/**************************************************************************************/
vector<string> vec_splitter(string s) {
	s += ',';
	vector<string> res;
	while (!s.empty()) {
		res.push_back(s.substr(0, s.find(',')));
		s = s.substr(s.find(',') + 1);
	}
	return res;
}
void debug_out(
    vector<string> __attribute__ ((unused)) args,
    __attribute__ ((unused)) int idx,
    __attribute__ ((unused)) int LINE_NUM) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if (idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}
#define RIS
#ifdef RIS
#define check(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#else
#define check(...) 42
#endif

/****************************************************************************************/
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; }; sim > rge<c> range(c i, c j) { return rge<c> {i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0); sim > char dud(...);
#define _RIS_
struct debug {
#ifdef _RIS_
	eni( != ) cerr << boolalpha << i; ris;
}
eni( == ) ris << range(begin(i), end(i));
}
sim, class b dor(pair < b, c > d) {ris << "(" << d.first << ", " << d.second << ")";}
sim dor(rge<c> d) {*this << "["; for (auto it = d.b; it != d.e; ++it) *this << ", " + 2 * (it == d.b) << *it; ris << "]";}
#else
	sim dor(const c&) { ris; }
#endif
};
vector<char*> tokenizer(const char* args) {
	char *token = new char[111]; strcpy(token, args); token = strtok(token, ", ");
	vector<char*> v({token});
	while (token = strtok(NULL, ", ")) v.push_back(token);
	return reverse(v.begin(), v.end()), v;
}
void debugg(vector<char*> args) { cerr << " "; }
template <typename Head, typename... Tail>
void debugg(vector<char*> args, Head H, Tail... T) {
	debug() << " [" << args.back() << ": " << H << "] ";
	args.pop_back(); debugg(args, T...);
}
#define harg(...) #__VA_ARGS__
#ifdef _RIS_
#define dbg(...) { debugg(tokenizer(harg(__VA_ARGS__, \t-->Line)), __VA_ARGS__, __LINE__); cerr << endl;}
#else
#define dbg(...) { }
#endif

/***************************************************************************************/
// Misc
#define gap ' '
#define endl '\n'
#define pb push_back
#define print(array) { for (auto x : array) cout << x << gap; cout << endl; }
#define sortd(arr, n) sort(arr, arr + n, greater<long long>());
#define sorta(arr, n) sort(arr, arr + n);
/***************************************************************************************/
int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}
	int O=0,Tw=0, Th=0, F=0;
	for(int i=0; i<n; i++) {
		if(arr[i]==1) O++;
		else if(arr[i]==2) Tw++;
		else if(arr[i]==3) Th++;
		else F++;
	}
	O = O-Th;
	if(O<0) O = 0;
	int m = Tw/2;
	if(Tw%2!=0) {
		if(O>0) {
			O = O-2;
			if(O<0) O = 0;
		}
		m++;
	}
	if(O>=1 && O<=4) m++;
	else m = m+(O/4);
	if(O>4 && O%4 != 0) m++;
	int N = m+Th+F;
	printf("%d\n", N);
}
/*
	2 3 4 4 2 1 3 1 2 2 2 1

*/