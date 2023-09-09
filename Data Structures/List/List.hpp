#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include <list>
#include <forward_list>

class ListManager {
private:
    std::list<int> doublyLinkedList;          // A doubly-linked list
    std::forward_list<int> singlyLinkedList;  // A singly-linked list

public:
    // Add an element to the end of the doubly-linked list
    void addToDoublyLinkedListBack(int value);

    // Add an element to the beginning of the doubly-linked list
    void addToDoublyLinkedListFront(int value);

    // Remove the last element from the doubly-linked list
    void removeFromDoublyLinkedListBack();

    // Remove the first element from the doubly-linked list
    void removeFromDoublyLinkedListFront();

    // Print the doubly-linked list
    void printDoublyLinkedList() const;

    // Add an element to the beginning of the singly-linked list
    void addToSinglyLinkedListFront(int value);

    // Remove the first element from the singly-linked list
    void removeFromSinglyLinkedListFront();

    // Print the singly-linked list
    void printSinglyLinkedList() const;
};

// Add an element to the end of the doubly-linked list
void ListManager::addToDoublyLinkedListBack(int value) {
    doublyLinkedList.push_back(value);
}

// Add an element to the beginning of the doubly-linked list
void ListManager::addToDoublyLinkedListFront(int value) {
    doublyLinkedList.push_front(value);
}

// Remove the last element from the doubly-linked list
void ListManager::removeFromDoublyLinkedListBack() {
    if (!doublyLinkedList.empty()) {
        doublyLinkedList.pop_back();
    }
}

// Remove the first element from the doubly-linked list
void ListManager::removeFromDoublyLinkedListFront() {
    if (!doublyLinkedList.empty()) {
        doublyLinkedList.pop_front();
    }
}

// Print the doubly-linked list
void ListManager::printDoublyLinkedList() const {
    for (const auto& elem : doublyLinkedList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Add an element to the beginning of the singly-linked list
void ListManager::addToSinglyLinkedListFront(int value) {
    singlyLinkedList.push_front(value);
}

// Remove the first element from the singly-linked list
void ListManager::removeFromSinglyLinkedListFront() {
    if (!singlyLinkedList.empty()) {
        singlyLinkedList.pop_front();
    }
}

// Print the singly-linked list
void ListManager::printSinglyLinkedList() const {
    for (const auto& elem : singlyLinkedList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

#endif // LIST_HPP
