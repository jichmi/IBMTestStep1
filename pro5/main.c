LinkList RemoveDupNode(LinkList L)//ɾ���ظ������㷨
{
    LinkList p,q,r;
    p=L->next;
    while(p)    // p���ڱ�������
    {
         q=p;
         while(q->next) // q����p����Ľ�㣬����p��ֵ�Ƚ�
         {
             if(q->next->data==p->data)
             {
                 r=q->next; // r������Ҫɾ���Ľ��
                 q->next=r->next;   // ��Ҫɾ���Ľ���ǰ�������
                 free(r);
             }
             else
                 q=q->next;
         }
         p=p->next;
    }
    return L;
}
