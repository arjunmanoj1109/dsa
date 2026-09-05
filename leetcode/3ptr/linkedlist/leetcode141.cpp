#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;
struct listnode{
    int val;
    struct listnode* next;
};
bool hasCycle(struct listnode*head){
    struct listnode* slow=head;
    struct listnode* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow= slow->next;
        fast= fast->next->next;
        if(slow==fast){
            return true;
        }
    }return false;

}

int main() {
    struct listnode node4={4,NULL};
    struct listnode node3={3,&node4};
    struct listnode node2={2,&node3};
    struct listnode node1={1,&node2};
    
    struct listnode *head =&node1;
    // Test 1: No cycle
    if (hasCycle(head)) {
        printf("Test 1: Cycle detected!\n");
    } else {
        printf("Test 1: No cycle detected.\n");
    }

// Create a cycle: node4 points back to node2 (1 -> 2 -> 3 -> 4 -> 2 ...)
    node4.next = &node2;

    // Test 2: With cycle
    if (hasCycle(head)) {
        printf("Test 2: Cycle detected!\n");
    } else {
        printf("Test 2: No cycle detected.\n");
    }

    return 0;
}