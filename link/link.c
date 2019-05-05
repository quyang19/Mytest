
void main()
{
     
     tail = head->next;
     while(NULL != tail)
     {
     tmp = tail->next;
    if(tmp==NULL)
    {
       head->next =tmp;
    }
     tmp->next = tail;
     tail = tmp;
     }
  
}
