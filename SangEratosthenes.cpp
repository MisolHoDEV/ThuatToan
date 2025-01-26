#include <bits/stdc++.h>
using namespace std;

// Thuat toan check so nguyen to thong thuong O(can N)
int check_snt(int n){
	for(int i = 2 ; i<=sqrt(n) ; i++){
		if(n%i == 0) return 0 ;
	} return n>1;
}

// Thuat toan sang so nguyen to (luu y : dung trong n < 10^7) O(N can N)
int p[10000001];
void sang(){
	for(int i = 0 ; i<=1000000 ; i++){
		p[i] = 1;
	}

	p[0] = p[1] = 0;
	for(int i = 2 ; i<=sqrt(10000000) ; i++){
		if(p[i]){
			for(int j = i*i ; j<=10000000 ; j+=i){
				p[j] = 0;
			}
		}
	}
}
int main(){
	freopen("A.INP" , "r" , stdin);
	freopen("A.OUT" , "w" , stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	sang();
	int n;
	cin >> n;
	for(int i = 0 ; i<n ; i++){
		if(p[i]){
			cout << i << " ";
		}
	}



	return 0;
}




