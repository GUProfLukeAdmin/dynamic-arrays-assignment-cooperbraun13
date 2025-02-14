#include <vector>
#include <iostream>


void part1() {
    //TODO: Implement part 1
    // create an empty vector of ints
    std::vector<int> myVector;
    
    // add 50,000 integers to the vector
    for (int i = 0; i < 50000; i++) {
        myVector.push_back(i);
    }

    // record and output size and capacity after adding elements
    std::cout << "After adding elements: Size = " << myVector.size() << ", Capacity = " << myVector.capacity() << std::endl;
}

void part2() {
    //TODO: Implement part 2
}

int main() {
    part1();
    part2();
    return 0;
}