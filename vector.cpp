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

    // remove half the elements by resizing the vector
    myVector.resize(myVector.size() / 2);

    // record and output size and capacity after resizing
    std::cout << "After resizing: Size = " << myVector.size() << ", Capacity = " << myVector.capacity() << std::endl;
    
    // optimize memory usage by reducing capacity to match size
    myVector.shrink_to_fit();

    // record and output size and capacity after shrink_to_fit()
    std::cout << "After shrink_to_fit(): Size = " << myVector.size() << ", Capacity = " << myVector.capacity() << std::endl;
}

void part2() {
    //TODO: Implement part 2
    // create a std::vector<bool> with 10,000 elements
    std::vector<bool> boolVec(10000, true);

    // create a std::vector<char> with 10,000 elements
    std::vector<char> charVec(10000, 'a');

    // compute memory usage in bytes by dividing capacity by 8 (rounds up)
    size_t boolMemoryUsage = (boolVec.capacity() + 7) / 8;

    // each char is 1 byte
    size_t charMemoryUsage = charVec.capacity() * sizeof(char);

    // output memory usage results
    std::cout << "Memory usage of std::vector<bool>: " << boolMemoryUsage << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << charMemoryUsage << " bytes" << std::endl;
}

int main() {
    part1();
    part2();
    return 0;
}