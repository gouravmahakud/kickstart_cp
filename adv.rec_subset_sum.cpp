bool sum(int arr[],int n, int ta){ 
 	if(tar==0) return true;
 	if(n==0) return false;
 	if(arr[n-1]>ta) return subset_sum(arr,n-1,ta);
 	return (subset_sum(arr,n-1,ta) || subset_sum(arr,n-1,ta-arr[n-1]));
 }
 int main(){
 	int n,ta; cin>>n>>ta;
 	int arr[n];
 	for(int i=0;i<n;i++){
  cin>>arr[i];
  }
 	if (sum(arr,n,ta)) cout<<"YES";
 	else cout<<"NO";
 	return 0;
 }
