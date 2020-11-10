#include <iostream>
using namespace std;
bool isPrime(int n, int d=2){
  if(d<n-1 && n%d==0) return false;
  if(d>=n) return true;
  return isPrime(n, d+1); 
  }

int main() {
  int n;
  cin>>n;

bool b = isPrime(n);
if(b) cout<<"Is Prime!";
else cout<<"Not Prime!";
}
