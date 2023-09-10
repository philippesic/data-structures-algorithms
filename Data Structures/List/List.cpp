#include "List.hpp"
#include <iostream>
#include <list>
#include <forward_list>

int main() {
    std::list<int> doubleList;          // A doubly-linked list
    std::forward_list<int> singleList;  // A singly-linked list

    List<std::list<int> > doub;
    List<std::forward_list<int> > sing;

    // Test doubly-linked list
    std::cout << "Testing Doubly-Linked List:" << std::endl;
    doub.addToBack(doubleList, 10);
    doub.addToBack(doubleList, 20);
    doub.addToFront(doubleList, 5);
    doub.printList(doubleList);  // Output: 5 10 20

    doub.removeFromBack(doubleList);
    doub.removeFromFront(doubleList);
    doub.printList(doubleList);  // Output: 10

    doub.removeFromBack(doubleList);
    doub.printList(doubleList);  // Output: (empty)

    // Test singly-linked list
    std::cout << "\nTesting Singly-Linked List:" << std::endl;
    sing.addToFront(singleList, 30);
    sing.addToFront(singleList, 40);
    sing.printList(singleList);  // Output: 40 30

    sing.removeFromFront(singleList);
    sing.printList(singleList);  // Output: 30

    sing.removeFromFront(singleList);
    sing.printList(singleList);  // Output: (empty)

    return 0;
}
