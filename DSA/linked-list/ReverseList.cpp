void reverse(Node* &head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* nextNode = nullptr;

    while(curr != nullptr){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    head = prev;
}
