#include <bits/stdc++.h> 
bool isPossible(int n, int m, vector<int> time, long long int mid){
	
	long long int dayCount = 1;
	long long int sum = 0;
	
	for (int i = 0; i < m; i++){
		if (sum + time[i] <= mid)
		{
			sum += time[i];
		}
		else
		{
			dayCount ++;
			if (dayCount > n || time[i] > mid){
				return false;
			}
			sum = time[i];
		}				
	}
	return true;
}

long long ayushGivesNinjatest(long long int n, long long int m, vector<int> time) 
{	
	long long int s = 0;
	long long int sumi = 0;

	for (long long int i= 0 ; i < m ; i++){
		sumi += time[i];
	}

	long long int e = sumi;
	long long int ans = -1;
	long long int mid = s + (e-s)/2;
	
	while(s<=e){
		if(isPossible(n, m, time, mid)){
			ans = mid;
			e = mid - 1;
		}else{
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;
}