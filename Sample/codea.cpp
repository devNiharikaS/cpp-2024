#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i = n; i>=0 ; i--){
		for(int j = 0 ; j<= (n-i)  ; j++){
			cout<<' ';
		}
		for(int j = i ; j>=0 ; j--){
			cout<<j<<' ';
		}
		for(int j = 1; j<=i ; j++){
			cout<<j<<' ';
		}
		
		cout<<endl;
	}
	for (int i = 1; i <= n; i++) {
        
        // Loop to print spaces before the numbers
        for (int j = 0; j <= (n - i) ; j++) {
            cout << ' ';
        }
        
        // Loop to print the descending pattern
        for (int j = i; j >= 0; j--) {
            cout << j<<' ';
        }
        
        // Loop to print the ascending pattern starting from 1
        for (int j = 1; j <= i; j++) {
            cout << j<<' ';
        }
		cout<<endl;
	}
	return 0;
}