#include <iostream>

using namespace std;

// LeetCode ListNode definition
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // Phase 1: Determine if a cycle exists
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Phase 2: Find the cycle's starting node
                ListNode *entry = head;
                while (entry != slow) {
                    entry = entry->next;
                    slow = slow->next;
                }
                return entry; // Node where the cycle begins
            }
        }

        return nullptr; // No cycle found
    }
};

int main() {
    // Construct linked list: 1 -> 2 -> 3 -> 4
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;

    Solution solver;

    // Test 1: No cycle (4 -> nullptr)
    ListNode* result1 = solver.detectCycle(&node1);
    if (result1 != nullptr) {
        cout << "Test 1: Cycle begins at node with value: " << result1->val << "\n";
    } else {
        cout << "Test 1: No cycle detected.\n";
    }

    // Create cycle: node4 points back to node2 (1 -> 2 -> 3 -> 4 -> 2 ...)
    node4.next = &node2;

    // Test 2: Cycle starting at node2
    ListNode* result2 = solver.detectCycle(&node1);
    if (result2 != nullptr) {
        cout << "Test 2: Cycle begins at node with value: " << result2->val << "\n";
    } else {
        cout << "Test 2: No cycle detected.\n";
    }

    return 0;
}