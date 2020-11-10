#include <iostream>
using namespace std;
void factor(int n, int d=2){
 	if(n==1) return;
 	if(n%d==0){
 		cout<<d<<" ";
 		factor(n/d, d);
 	}
 	else factor(n, d+1);
}

int main(){
 	int n; cin>>n;
 	factor(n);
 	return 0;	
 }
