
type struct bitree
{
int *left;
int *right;
}BITREE;

int inTraverse(BITREE *biTree)
{
    stack<BITREE> s;
    BITREE *pNode=biTree;
    while(pNode!=NULL || s.empty())
    {
         while(pNode)
         {
             s.push(pNode);
             pNode=pNode->left;
         }
         
         printf(s.top);
         pNode = s.top->right;
         s.pop();
     }
}
