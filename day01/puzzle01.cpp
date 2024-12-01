#include <iostream>
#include <set>
#include <cmath>

int main(int argc, char** argv) {

    std::multiset<int> Left {}, Right {};
    // Read two numbers at a time
    int A, B;
    while (std::cin >> A >> B) {
        Left.emplace(A);
        Right.emplace(B);
    }

    // Iterate over elements and calculate diff between Left and Right, then sum them
    int Total {};
    auto It = Right.cbegin();
    for (auto A : Left) {
        auto Diff = std::abs(A - *It);
        Total += Diff;
        ++It;
    }

    std::cout << Total << std::endl;
    return 0;
}
