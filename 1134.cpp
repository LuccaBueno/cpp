#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
   	int alcool = 0, gasolina = 0, diesel = 0;
   	
   	
   	while(true){
   		
   		int input;
   		
   		cin >> input;
   		
   		switch(input){
   			case 1: 
			   alcool++;
			   break;
   			case 2: 
			   gasolina++;
			   break;
   			case 3: 
			   diesel++;
			   break;
   			
   			case 4: break;
   			
   			 default:
        
        		continue;
        		
		}	
		if(input == 4){
			break;
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl;
   
    return 0;
}
