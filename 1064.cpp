#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int i = 0, q_positivos = 0;
	float soma = 0;
    
    while(i++ < 6){
    	
    	float num = 0;
    	
    	cin >> num;
    	
    	if(num > 0){
    		
    		soma += num;
    			
    		q_positivos++;
    		
		}
		
	}
	
    float res = soma/q_positivos;
    
    cout << q_positivos << " valores positivos" << endl;
	cout << fixed << setprecision(1) << res << endl;

    return 0;
}
