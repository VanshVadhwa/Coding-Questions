/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * @input D : Integer
 * 
 * @Output Integer
 */

#include <iostream>

int solve(int A, int B, int C, int D) {
    if(A == B && C == D) {
        return 1;
    }
    return 0;
}

int main() {
    int A = 5;
    int B = 5;
    int C = 7;
    int D = 7;

    int result = solve(A, B, C, D);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

