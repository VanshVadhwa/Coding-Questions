#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[103];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int number = 0;
    int index = 0;
    
    if(arr[0]%2==0) number++;
    if(arr[1]%2==0) number++;
    if(arr[2]%2==0) number++;

    if(number==0 || number == 1) {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0) index = i;
        }
    }
    else {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0) index = i;
        }
    }
    cout << index + 1 << endl;
    return 0;
}
