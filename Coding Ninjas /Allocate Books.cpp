int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
	if(m>n) {
		return -1;
	}

	int start = 0, end = 0, ans = 0;

	for(int i=0;i<n;i++) {
		start = max(start, arr[i]);
		end += arr[i];
	}

	while(start <= end)
	{
		int mid = start + (end-start)/2;

		int pages = 0, student = 1;

		for(int i=0;i<n;i++) {
			pages += arr[i];
			if(pages > mid) {
				student++;
				pages = arr[i];
			}
		}

		if(student <= m) {
			ans = mid;
			end = mid-1;
		}
		else {
			start = mid+1;
		}
	}
	return ans;
}
