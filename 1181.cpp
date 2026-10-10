#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	double m[12][12] = {0}, res = 0;
	int linha;
	char op;
	
	cin >> linha >> op;
	
	for(int i = 0; i < 12; i++){
		for(int j = 0; j < 12; j++){
			
			cin >> m[i][j]; 
			
			if(i == linha){
				
				res += m[i][j];
				
			}
		}
	}
	if(op == 'M'){
		res /= 12;
	}
	cout << fixed << setprecision(1) << res << endl;
}
