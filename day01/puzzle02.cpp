#include <iostream>
#include <set>
#include <cmath>

int main(int argc, char** argv) {

    std::set<int> Left {};
    std::multiset<int> Right {};
    // Read two numbers at a time
    int A, B;
    while (std::cin >> A >> B) {
        Left.emplace(A);
        Right.emplace(B);
    }

    // Iterate over numbers in Left (guaranteed to be unique since it's a set) and count them in Right
    int Total {};
    for (auto A : Left) {
        auto Count = Right.count(A);
        Total += A * Count;
    }

    std::cout << Total << std::endl;
    return 0;
}
