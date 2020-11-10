#include <iostream>
// resursion program to print first N natural numbers
using namespace std;
void natural(int n){
  if(n==0) return;
  else {
  natural(n-1);
  std::cout<<n<<" ";
  }
}
int main() {
  int n;
  cin>>n;
natural(n);
}
