#include <bits/stdc++.h>
#define pairI pair<int, int>
#define ull unsigned long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	ull rslt;
	int T, N, num, ex, ey;
	int a, b;
	cin >> T;


	for(int t=1;t<=T;t++){
		cin >> N;
		priority_queue< pairI > EX, EY;
		priority_queue< pairI, vector<pairI>, greater<pairI> > X, Y;
		rslt = 0;

		while(N--){
			cin >> a >> b;
			X.push({a,b});
			Y.push({b,a});
		}

		while(!X.empty()){

			num = 0;
			do{
				EX.push(X.top());
				num++;
				X.pop();
			}while(X.top().first == EX.top().first && !X.empty());
			if(!(num%2)){
				while(num){
					a = EX.top().second;
					EX.pop();
					b = EX.top().second;
					EX.pop();
					rslt += a-b;
					num -= 2;
				}
			}
	
		}
		while(!Y.empty()){
			num = 0;
			do{
				EY.push(Y.top());
				num++;
				Y.pop();
			}while(Y.top().first == EY.top().first && !Y.empty());

			if(!(num%2)){
				while(num){
					a = EY.top().second;
					EY.pop();
					b = EY.top().second;
					EY.pop();
					rslt += a-b;
					num -= 2;
				}
			}	
		}

		ex = EX.top().first;
		ey = EY.top().first;

		while(!EX.empty() && EX.size() != 1){

				a = EX.top().second;
				EX.pop();
				if(a==ey){
					a = EX.top().second;
					EX.pop();
				}

				b = EX.top().second;
				EX.pop();
				if(b==ey){
					b = EX.top().second;
					EX.pop();
				}
				rslt += a-b;
		}

		while(!EY.empty() && EY.size() != 1){
				a = EY.top().second;
				EY.pop();
				if(a==ex){
					a = EY.top().second;
					EY.pop();
				}
				b = EY.top().second;
				EY.pop();
				if(b==ex){
					b = EY.top().second;
					EY.pop();
				}
				rslt += a-b;
		}
		cout << "Case #" << t << endl << rslt << endl;
		
	}

}
