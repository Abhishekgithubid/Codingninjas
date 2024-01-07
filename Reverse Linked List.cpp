Node* reverseLinkedList(Node *head)
{
    // Write your code here
     // Base case:
    if (head == NULL || head->next == NULL) {
        return head;
    }
    
    
    Node* newHead = reverseLinkedList(head->next);
    
    Node* front = head->next;
    
    front->next = head;
    
    head->next = NULL;
    
    return newHead;

}