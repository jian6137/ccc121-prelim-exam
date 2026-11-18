#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n = nullptr) : value(v), next(n) {}
};

Node* insertSorted(Node* head, int value) {
    Node* fresh = new Node(value);
    if (head == nullptr || value < head->value) {
        fresh->next = head;
        return fresh;
    }

    Node* cur = head;
    while (cur->next != nullptr && cur->next->value <= value) {
        cur = cur->next;
    }

    fresh->next = cur->next;
    cur->next = fresh;
    return head;
}

void printList(const Node* head, const Node* const origNodes[], int origCount, int insertedValue) {
    bool valueExisted = false;
    for (int i = 0; i < origCount; ++i) {
        if (origNodes[i]->value == insertedValue) {
            valueExisted = true;
            break;
        }
    }

    const Node* cur = head;
    while (cur != nullptr) {
        if (cur != head) {
            cout << " -> ";
        }
        bool isOrig = false;
        int totalSame = 0;
        int rank = 0;
        for (int i = 0; i < origCount; ++i) {
            if (origNodes[i]->value == cur->value) {
                if (origNodes[i] == cur) {
                    isOrig = true;
                    rank = totalSame;
                }
                ++totalSame;
            }
        }
        if (!isOrig) {
            if (valueExisted) {
                cout << cur->value << "new";
            } else {
                cout << cur->value;
            }
        } else if (totalSame > 1 || cur->value == insertedValue) {
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
    int n, value;
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

    cout << "Enter value to insert: ";
    cin >> value;

    head = insertSorted(head, value);
    printList(head, origNodes, origCount, value);
    cout << '\n';
    freeList(head);

    return 0;
}
