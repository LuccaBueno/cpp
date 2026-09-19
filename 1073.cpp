#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
    	
    	if(i % 2 == 0){
    		
    		cout << i <<"^2 = " << i * i << endl;
    		
		}
	}
   
    return 0;
}
