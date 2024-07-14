#include<iostream>
using namespace std;

int bookAllocate(int arr[], int n, int m) 
{
    int start = 0, end = 0, ans = 0;

    if(m>n) {
        return -1;
    }

    for(int i=0;i<n;i++) {
        start = max(arr[i], start);
        end += arr[i];
    }

    while(start <= end)
    {
        int mid = start + (end-start)/2;

        int pages = 0, students = 1;
        
        for(int i=0;i<n;i++) {
            pages += arr[i];
            if(pages > mid) {
                students++;
                pages = arr[i];
            }
        }

        if(students <= m) {
            ans = mid;
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return ans;
}

int main() {
    int arr[100];
    int n, m;
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = bookAllocate(arr, n, m);
    cout << ans << endl;
    return 0;
}