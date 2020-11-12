int count_char(char c, string s, int n){
 	if(n<0) return 0;
 	if(s[n]==c) return 1+count(c, s, n-1);
 	return count(c, s, n-1);
 }
int main(){
 	string s; cin>>s; 
 	char c;
  cin>>c;
 	int n=s.size()-1;
 	cout<<count_char(c, s, n);
 }
