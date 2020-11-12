int main(){
 	int n; cin>>n;
 	vector<int>v(n);
 	unordered_map<int,int> um;
 	for(int i=0; i<n; i++) {
 		cin>>v[i];
 		um[v[i]] = um[v[i]]+1;
 	}
 	int freq=0;
 	int ans;
 	for(auto j: um){
 		if(j.second>freq){
 			ans=j.first;
 			freq = j.second;
 		}
 	}
 	cout<<ans;
 	return 0;
}
