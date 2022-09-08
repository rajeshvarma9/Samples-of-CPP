// Funtion to reverse a linkedlist

Node* reverseList(Node *head)
{

  if(head->next==NULL) {
      return head;
  }
  struct Node *prev=head;
  struct Node *next = head->next;
  prev->next=NULL;
  while(next) {
      head = next;
      next=next->next;
      head->next=prev;
      prev = head;
  }
  return head;
  
}