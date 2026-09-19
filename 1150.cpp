#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   	int x, z;
   	
   	cin >> x;
   	cin >> z;
   	
   	while(z < x){
   		cin >> z;	
	}
	
	int y = 1;
	
	int i = x+1;
	
	while(x <= z){
		x += i;
		
		i++;
		y++;
	}
	cout << y;
   
    return 0;
}
