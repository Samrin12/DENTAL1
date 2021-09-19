//Name:Samrin Shanjana Flavia; Roll:2054901046; Sec:A:
#include <iostream>
using namespace std;
class node
{
   public:
   char x;
   node *next;
   node *prev;
};
void getnode(node** node1, char x1)
{
   struct node* newnode=new node;
   newnode->x=x1;
   newnode->next=(*node1);
   newnode->prev=NULL;
   if ((*node1)!=NULL)
      (*node1)->prev=newnode ;
      (*node1)=newnode;
}
bool palindrome(node *first)
   {
   if (first==NULL)
      return true;
   node *last = first;
   while (last->next != NULL)
      last=last->next;
   while (first!=last && last!=first->prev)
   {
      if (first->x!=last->x)
         return false;
      first=first->next;
      last=last->prev;
   }
return true;
}
int main() {
   node*head=NULL;
   string str="samrin";
   for(int i=0; i< str.length(); i++)
    {
      getnode(&head, str[i]);
    }
   if (palindrome(head))
      cout << "The list is palindrome.";
   else
      cout << "The list is not palindrome.";
}
