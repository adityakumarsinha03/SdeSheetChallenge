int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int platform=0, mx=0;
    	int i=0, j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform++;
    	        mx=max(mx,platform);
    	        i++;
    	    }else{
    	        platform--;
    	        j++;
    	    }
    	}
    	return mx;
    }
