static bool compare(Job j1, Job j2) {
        if(j1.profit>j2.profit) return true;
        else  return false;
        
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr, arr+n, compare);
        int mx=0;
        for(int i=0; i<n;i++){
            mx= max(mx, arr[i].dead);
        }
        vector<int> slot(mx+1, -1);
        int profit=0, count=0;
        for(int i=0; i<n;i++){
            int last= arr[i].dead;
            while(last>0){
                if(slot[last]==-1){
                    slot[last]= arr[i].id;
                    profit+=arr[i].profit;
                    count++;
                    break;
                }else{
                    last--;
                }
            }
        }
        vector<int> ans(2,0);
        ans[0]=count;
        ans[1]=profit;
        return ans;
    } 
