int fPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        if(arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return e;
}

int bSearch(vector<int>& arr, int start, int end, int k)
{
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(arr[mid] == k){
            return mid;
        } 
        else if (arr[mid] > k) 
        {
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = fPivot(arr, n);
    int ind = -1;
    if(arr[pivot] <= k && k <= arr[n-1])
    {
        ind = bSearch(arr, pivot, n-1, k);
    }
    else
    {
        ind = bSearch(arr, 0, pivot-1, k);
    }
    return ind;
}
