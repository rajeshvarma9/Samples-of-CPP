// Funtion to get the nth node from end of the linked list


int getNthFromLast(Node *head, int n)
{
       struct Node *p = head;
       int c=0, k;
       while(p) {
           p=p->next;
           c++;
       }
       if(n>c) {
           return -1;
       }
       k=(c-n)+1;
       for(int i=1; i<k; i++) {
           head=head->next;
       }
       return head->data;
       
}