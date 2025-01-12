#include <bits/stdc++.h> 
vector<int> rev(vector<int> v){
	int s = 0;
	int e = v.size() - 1;
	while(s<e){
		swap(v[s++], v[e--]);
	}
	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int x = n-1;
	int y = m-1;
	vector<int> ans;
	int sum = 0, carry = 0;

	while(x>=0 && y>=0){
		sum = a[x] + b[y] + carry;
		carry = sum / 10;
		sum = sum % 10;

		ans.push_back(sum);
		x--;
		y--;

	}

	while(x>=0){
		sum = a[x] + carry;
		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
		x--;
	}

	while(y>=0){
		sum = b[y] + carry;
		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);
		y--;
	}

	while(carry != 0){
		sum = carry;
		carry = sum / 10;
		sum = sum % 10;
		ans.push_back(sum);

	}

	return rev(ans);
}