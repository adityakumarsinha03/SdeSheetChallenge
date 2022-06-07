 static bool compare(Item a, Item b){
        if((double)a.value/a.weight > (double)b.value/b.weight){
            return true;
        }else{
            return false;
        }
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, compare);
        double profit=0 , currW= W;
        for(int i=0; i<n; i++){
            if(arr[i].weight<=currW){
                profit+=arr[i].value;
                currW-=arr[i].weight;
            }else{
                profit+= ((double)arr[i].value/arr[i].weight) * currW;
                break;
            }
        }
        return profit;
    }
