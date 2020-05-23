#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num;
	cin >> num;
	if(num%2 == 0){
		cout << num-8 << " 8";
	} else{
		cout << num-9 << " 9";
	}
	cout << "\n";
	return 0;
}
