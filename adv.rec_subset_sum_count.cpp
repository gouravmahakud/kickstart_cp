int count_subset(int arr[],int n,int ta){ 
 	if(ta==0) {
 		return 1;
 	}
 	if(n==0){
 		return 0;
 	}
 	if(arr[n-1]>ta){
 		return count_subset(arr,n-1,ta);
 	}
 	return count_subset(arr,n-1,ta) + count_subset(arr,n-1,ta-arr[n-1]); 
 }
 int main(){
 	int n,ta; cin>>n>>ta;
 	int arr[n];
 	for(int i=0;i<n;i++){
 		cin>>arr[i];
 	}
 	cout<<count_subset(arr,n,ta);
 }
