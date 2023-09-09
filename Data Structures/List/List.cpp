#include "List.hpp"
#include <iostream>

int main() {
    ListManager manager;

    // Test doubly-linked list
    std::cout << "Testing Doubly-Linked List:" << std::endl;
    manager.addToDoublyLinkedListBack(10);
    manager.addToDoublyLinkedListBack(20);
    manager.addToDoublyLinkedListFront(5);
    manager.printDoublyLinkedList();  // Output: 5 10 20

    manager.removeFromDoublyLinkedListBack();
    manager.removeFromDoublyLinkedListFront();
    manager.printDoublyLinkedList();  // Output: 10

    manager.removeFromDoublyLinkedListBack();
    manager.printDoublyLinkedList();  // Output: (empty)

    // Test singly-linked list
    std::cout << "\nTesting Singly-Linked List:" << std::endl;
    manager.addToSinglyLinkedListFront(30);
    manager.addToSinglyLinkedListFront(40);
    manager.printSinglyLinkedList();  // Output: 40 30

    manager.removeFromSinglyLinkedListFront();
    manager.printSinglyLinkedList();  // Output: 30

    manager.removeFromSinglyLinkedListFront();
    manager.printSinglyLinkedList();  // Output: (empty)

    return 0;
}
