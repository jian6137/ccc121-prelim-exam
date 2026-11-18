#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n = nullptr) : value(v), next(n) {}
};

Node* removeAll(Node* head, int target) {
    while (head != nullptr && head->value == target) {
        Node* victim = head;
        head = head->next;
        delete victim;
    }

    if (head == nullptr) {
        return nullptr;
    }

    Node* prev = head;
    Node* cur = head->next;
    while (cur != nullptr) {
        if (cur->value == target) {
            prev->next = cur->next;
            delete cur;
            cur = prev->next;
        } else {
            prev = cur;
            cur = cur->next;
        }
    }

    return head;
}

void printList(const Node* head) {
    if (head == nullptr) {
        cout << "empty (nullptr)";
        return;
    }
    const Node* cur = head;
    while (cur != nullptr) {
        if (cur != head) {
            cout << " -> ";
        }
        cout << cur->value;
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
    int n, target;
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
            if (head == nullptr) {
                head = node;
                tail = node;
            } else {
                tail->next = node;
                tail = node;
            }
        }
    }

    cout << "Enter target: ";
    cin >> target;

    head = removeAll(head, target);
    printList(head);
    cout << '\n';
    freeList(head);

    return 0;
}
