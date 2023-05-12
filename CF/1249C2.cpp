// CPP Program to demonstrate that we can use memset() to
// set all values as 0 or -1 for integral data types also
#include <bits/stdc++.h>
using namespace std;
  
// Driver Code
int main()
{
    int a[5];
  
    // all elements of A are zero
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  
    // all elements of A are -1
    memset(a, -1, sizeof(a));
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
  
    // Would not work
    memset(a, 1, sizeof(a)); // WRONG
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}

/*#include<stdio.h> //1350851717672992089
#include<math.h>
int main() {
	long long int a = pow(3, 38), b = 2350851717672992089;
	//int c = 1350851717672992089;
	printf("%lld\n%lld\n", a, b);
	printf("%lld", a+2);
	return 0;
}*/