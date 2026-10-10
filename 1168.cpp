#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	vector<int> v = {6, 2, 5, 5, 4 , 5, 6, 3, 7, 6};
 	
 	int teste, numero, res=0; 
	string input;
 	cin >> teste;
 	
 	for(int i = 0; i < teste; i++){
 		
 		cin >> input;
 		
 		for(int j = 0; j < input.size(); j++){
 			
 			numero = input[j] - '0';
 			res += v[numero];
 			
		}
 		
		cout << res <<" leds"<<endl;
 		res = 0;
 	}
}
