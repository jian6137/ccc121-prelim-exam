#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n = nullptr) : value(v), next(n) {}
};

Node* mergeLists(Node* a, Node* b) {
    Node dummy(0);
    Node* tail = &dummy;
    while (a != nullptr && b != nullptr) {
        if (a->value <= b->value) {
            tail->next = a;
            a = a->next;
        } else {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    tail->next = (a != nullptr) ? a : b;
    return dummy.next;
}

Node* mergeSort(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* slow = head;
    Node* fast = head->next;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* right = slow->next;
    slow->next = nullptr;
    return mergeLists(mergeSort(head), mergeSort(right));
}

void printList(const Node* head, const Node* const origNodes[], int origCount) {
    if (head == nullptr) {
        cout << "empty (nullptr)";
        return;
    }
    const Node* cur = head;
    while (cur != nullptr) {
        if (cur != head) {
            cout << " -> ";
        }
        int totalSame = 0;
        int rank = 0;
        for (int i = 0; i < origCount; ++i) {
            if (origNodes[i]->value == cur->value) {
                if (origNodes[i] == cur) {
                    rank = totalSame;
                }
                ++totalSame;
            }
        }
        if (totalSame > 1) {
            cout << cur->value << static_cast<char>('a' + rank);
        } else {
            cout << cur->value;
        }
        cur = cur->next;
    }
}

void freeList(Node* head) {
    while (head != nullptr) {
        Node* nxt = head->next;
        delete head;
        head = nxt;
    }
}

int main() {
    int n;
    Node* origNodes[100] = {};
    int origCount = 0;
    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter number of nodes: ";
    cin >> n;
    if (n > 0) {
        cout << "Enter " << n << " values: ";
        for (int i = 0; i < n; ++i) {
            int v;
            cin >> v;
            Node* node = new Node(v);
            if (origCount < 100) {
                origNodes[origCount++] = node;
            }
            if (head == nullptr) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }
    }

    head = mergeSort(head);
    printList(head, origNodes, origCount);
    cout << '\n';
    freeList(head);

    return 0;
}
