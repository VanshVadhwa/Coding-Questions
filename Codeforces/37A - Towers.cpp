// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
// using namespace std;

// vector<int> maxFrequencyElement(vector<int> arr)
// {
//     int n = arr.size();
//     unordered_map<int,int> map;
//     for(int i=0;i<n;i++) map[arr[i]]++;

//     //frequency
//     int frequency = 0;
//     for(auto pair : map)
//     {
//         if(frequency<pair.second) {
//             frequency = pair.second; 
//         }  
//     }

//     //element
//     int element = -1;
//     for(auto pair : map)
//     {
//         if(pair.second == frequency)
//         element = max(pair.first, element);
//     }
//     return {frequency, element};
// }


// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++) cin >> arr[i];
//     vector<int> ans = maxFrequencyElement(arr);
//     cout << ans[0] << " " << ans[1];
//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> length;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        length[arr[i]]++;
    }

    int height = 0;
    for (auto pair : length) {
        height = max(height, pair.second);
    }

    // The number of towers is the number of unique bar lengths
    int towers = length.size();

    cout << height << " " << towers << endl;
    return 0;
}
