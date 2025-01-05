int firstOcc(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ind = -1;
    while(start<=end){
        if(arr[mid]==k){
            ind = mid;
            end = mid - 1;
        }
        else if(arr[mid] > k){
            end = mid - 1;
        }
        else if(arr[mid] < k){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ind;
}

int lastOcc(vector<int>& arr, int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ind = -1;
    while(start<=end){
        if(arr[mid]==k){
        ind = mid;
        start = mid + 1;
        }
        else if(arr[mid] > k){
        end = mid - 1;
        }
        else if(arr[mid] < k){
        start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ind;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}
