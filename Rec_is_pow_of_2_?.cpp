#include <iostream>
using namespace std;
bool isPower(int n, int d=2){
  if(n==1) return true;
  if(n%2!=0) return false;
  return isPower(n/2);
  }

int main() {
  int n;
  cin>>n;

bool b = isPower(n);
if(b) cout<<"Is Power!";
else cout<<"Not Power!";
}
