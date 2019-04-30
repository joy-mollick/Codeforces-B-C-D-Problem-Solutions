#include<bits/stdc++.h>

/*
Nayeem Mollick Joy , Electrical & Electronic Engineering , University of Rajshahi.
Passionate Contest Programmer , Coder , Android Developer */

using namespace std;

#define maxi  100000001

typedef unsigned long long ll;

int main() {


	int n,a,x;
	cin >> n;
	vector<int> v;
	multiset<int> b;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back(a);
	}
	for (int i = 0; i < n; ++i) {
        cin>>x;
		b.insert(x);
	}

	for (int i = 0; i < n; ++i)
        {

		multiset<int>::iterator  it = b.lower_bound(n - v[i]);// equal or  minimal greater than
		if (it == b.end()) it = b.begin();
		cout << (v[i] + *it) % n << " ";
		b.erase(it);
	}
	cout << endl;

	return 0;
}
