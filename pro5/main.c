LinkList RemoveDupNode(LinkList L)//删除重复结点的算法
{
    LinkList p,q,r;
    p=L->next;
    while(p)    // p用于遍历链表
    {
         q=p;
         while(q->next) // q遍历p后面的结点，并与p数值比较
         {
             if(q->next->data==p->data)
             {
                 r=q->next; // r保存需要删掉的结点
                 q->next=r->next;   // 需要删掉的结点的前后结点相接
                 free(r);
             }
             else
                 q=q->next;
         }
         p=p->next;
    }
    return L;
}
