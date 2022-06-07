#include<bits/stdc++.h>
class work{
    public:
    int s;
    int e;
};
static bool compare(work w1, work w2){
    return w1.e < w2.e;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n= start.size();
    work w[n];
    for(int i=0; i<n; i++){
        w[i].s=start[i];
        w[i].e=finish[i];
    }   
    sort(w, w+n, compare); 
    int limit=0, count=0;
    for(int i=0; i<n; i++){
        if(w[i].s >= limit){
            limit= w[i].e;
            count++;
        }
    }
    return count;
}
