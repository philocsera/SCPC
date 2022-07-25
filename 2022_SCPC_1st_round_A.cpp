#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ull rslt;
	int T, N;
	int P[300000], V[300000];


	cin >> T;
	for(int t=1;t<=T;t++){
		cin >> N;
		rslt = 0;
		pair<int, int> ant[300000];

		for(int i=0;i<N;i++) cin >> P[i];
		for(int i=0;i<N;i++) cin >> V[i];
		for(int i=0;i<N;i++){
			ant[i].first = V[i];
			ant[i].second = P[i];
		}

		sort(ant, ant+N);

		for(int i=0;i<N;i++) rslt += abs(ant[i].second - P[i]);

		cout << "Case #" << t << endl << rslt << endl;


	}
}
