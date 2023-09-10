#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <list>
#include <forward_list>

template <typename T> class List {

public:

// Add an element to the end of list
void addToBack(T& list, int value) {
    list.push_back(value);
}

// Add an element to the beginning of list
void addToFront(T& list, int value) {
    list.push_front(value);
}

// Remove the last element from list
void removeFromBack(T& list) {
    if (!list.empty()) {
        list.pop_back();
    }
}

// Remove the first element from list
void removeFromFront(T& list) {
    if (!list.empty()) {
        list.pop_front();
    }
}

// Print list
void printList(T& list) const {
    for (const auto& elem : list) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}
};
#endif // LIST_HPP
