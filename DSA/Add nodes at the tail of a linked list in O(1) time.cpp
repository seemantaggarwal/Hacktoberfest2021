#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
     char val;
     Node* next;
};
Node* Add(char c,Node* prev)
{
    Node* nd = new Node();
    nd->val = c;
    nd->next = prev->next;
    prev->next = nd;
    return nd;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    string s;
    cout << "Enter the number of Nodes You Want\n";
    cin >> s;

    Node* Head = new Node();
    Head->val = s[0];
    Head->next = NULL;
    Node* prev = Head;
    for(int i=1;i<s.size();i++)
         prev=Add(s[i] , prev);

    Node* trav = Head;
    cout <<"Your Linked list\n";
    while(trav)
    {
      cout << trav->val << ' ';
      trav=trav->next;
    }
    return 0;
}
