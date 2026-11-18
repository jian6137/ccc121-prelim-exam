#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n = nullptr) : value(v), next(n) {}
};

void visitReverse(const Node* node, ostream& out, bool& first) {
    if (node == nullptr) {
        return;
    }

    visitReverse(node->next, out, first);

    if (!first) {
        out << ' ';
    }
    out << node->value;
    first = false;
}

void reverseValues(const Node* head, ostream& out) {
    bool first = true;
    visitReverse(head, out, first);
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

    cout << '"';
    reverseValues(head, cout);
    cout << "\"\n";
    freeList(head);

    return 0;
}
