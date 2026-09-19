#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int grenais=0, inter=0, gremio=0, empate=0;
    
    while(true){
    	
    	int gol_inter = 0, gol_gremio = 0, flag = 0;
	
	    cin >> gol_inter >> gol_gremio;
	    
	    grenais++;
	    if(gol_inter == gol_gremio){
	    	
	    	empate++;
	    	
		}else if(gol_inter > gol_gremio){
			
			inter++;
			
		}else{
			
			gremio++;
			
		}
	    
	    cout << "Novo grenal (1-sim 2-nao)" << endl;
	    
		cin >> flag;
		
		if(flag == 2){
			
			break;
			
		}
		
		
	}
	cout << grenais << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empate << endl;
	
	if(inter>gremio){
		
		cout << "Inter venceu mais" << endl;
		
	}else if(gremio>inter){
		
		cout << "Gremio venceu mais" << endl;
		
	}else{
		
		cout << "Nao houve vencedor" << endl;
		
	}
    return 0;
}
