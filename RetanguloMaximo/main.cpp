#include <bits/stdc++.h>
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define dbg(x) cout << #x << " = " << x << endl
using namespace std;

long long lin, col;


long long AreaRetangulo(vector<long long> &altura){
	
	long long resposta = 0;

	stack <int> s;

	for(int i = 0; i < col; i++){
		while(s.size() != 0 && altura[s.top()] >= altura[i]){
			long long topo = s.top();
			s.pop();

			long long largura;

			if(s.size() == 0) largura = i;

			else largura = i - s.top() - 1;

			resposta = max (resposta, altura[topo] * largura);
		}
		s.push(i);
	}

	while (s.size()!=0) {

        int topo = s.top();
        s.pop();

        int largura;

        if (s.empty()) largura = col;

        else largura = col - s.top() - 1;
        

        resposta = max(resposta, altura[topo] * largura);
    }

	return resposta;
}



long long solve(vector<vector<int>> &matriz){ 

	vector<long long> altura(col, 0);
	

	long long resposta = 0;

	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			if (matriz[i][j] == 1) altura[j]++;
			else altura[j] = 0;
		}

		resposta = max(resposta, AreaRetangulo(altura));
	}

	return resposta;
}

int main(){
	_;

	cin >> lin >> col;

	vector<vector<int>> matriz(lin, vector<int>(col));

	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			cin >> matriz[i][j];
		}
	}

	cout << solve(matriz)<< endl;


	return 0;	
}
