#include <bits/stdc++.h>
using namespace std;

void pt(int n){
	for(int i = 2 ; i<=sqrt(n) ; i++){
		if (n%i == 0){
			cout << i << " ";
			while(n%i == 0) n/=i;
		}
	}
	if(n!=1){
		cout << n;
	} cout << endl;
}

void pt2(int n){
	for(int i =2 ; i<=sqrt(n) ; i++){
		int dem = 0;
		if (n%i == 0){
			cout << "(" << i << ", ";
			while (n%i == 0){
				++dem;
				n/=i;
			}
			cout << dem << ") ";
		}
	}
	if(n!=1){
			cout << "(" << n << ", 1)";
	} cout << endl;
}

void pt3(int n){
	for(int i = 2 ; i<=sqrt(n) ; i++){
		while(n%i == 0){
			cout << i;
			n/=i;
			if(n>1) cout << " x ";
		}
	}
	if(n!=1){
		cout << n;
	} cout << endl;
}

void pt4(int n){
	for(int i = 2 ; i<=sqrt(n) ; i++){
		int dem = 0;
		if(n%i == 0){
			while(n%i == 0){
				++dem;
				n/=i;
			}
			cout << i << "^" << dem;
			if(n>1) cout << " x ";
		}
	}
	if (n!=1){
		cout << n << "^1";
	}

}
int main(){

	int n;
	cin >> n;

	pt(n);
	pt2(n);
	pt3(n);
	pt4(n);

	return 0;
}