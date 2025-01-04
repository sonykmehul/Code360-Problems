bool isPossible(vector<int> &stalls, int k, int mid){
    int cowCount = 1;
    int n = stalls.size();
    int lasPos = stalls[0];
    for (int i = 0; i < n; i++){
        if(stalls[i] - lasPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lasPos = stalls[i];
        }
        
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int mini = stalls[0];
    int maxi = stalls[0];

    for (int i = 0; i < stalls.size(); i++){
        if(stalls[i] > maxi){
            maxi = stalls[i];
        }
        if(stalls[i] < mini){
            mini = stalls[i];
        }
    }

    int e = maxi - mini;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if (isPossible(stalls, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}