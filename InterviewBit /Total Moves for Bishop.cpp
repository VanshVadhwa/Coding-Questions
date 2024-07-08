#include <iostream>
using namespace std;

int solve(int A, int B) {
    int count = 0;
    
    count += min(8 - A, 8 - B);
    count += min(A - 1, B - 1);
    count += min(B - 1, 8 - A);
    count += min(A - 1, 8 - B);
    
    return count;
}

int main() {
    int A, B;
    cout << "Enter values for A and B: ";
    cin >> A >> B;
    
    int result = solve(A, B);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
