#include <stdio.h>//ͷ�ļ�
#include <stdlib.h>
typedef struct BiTNode
{
    char data;
    struct BiTNode *lchild,*rchild;
}
BiTNode,*BiTree;//����������
BiTree CreateBiTree()//������
{
    char p;BiTree T;
    scanf("%c",&p);
    if(p==' ')
        T=NULL;
    else
    {
        T=(BiTNode *)malloc(sizeof(BiTNode));//Ϊ��㿪�ٿռ�
        T->data=p;
        T->lchild=CreateBiTree();
        T->rchild=CreateBiTree();
    }
    return (T);
}
void PreOrder(BiTree T)//����
{
     if(T!=NULL)
   {
       printf("%c",T->data);
       PreOrder(T->lchild);
       PreOrder(T->rchild);

    }
}
void InOrder(BiTree T)//����
{
     if(T!=NULL)
   {
       InOrder(T->lchild);
        printf("%c",T->data);
       InOrder(T->rchild);

    }
}
void PostOrder(BiTree T)//����
{
     if(T!=NULL)
   {
       PostOrder(T->lchild);
       PostOrder(T->rchild);
       printf("%c",T->data);
    }
}
void main()//������
{
    BiTree Ta;
    Ta=CreateBiTree();
     printf("�������:");
     printf("\n");
     PreOrder(Ta);
     printf("\n");
     printf("�������:");
     printf("\n");
     InOrder(Ta);
     printf("\n");
     printf("�������:");
     printf("\n");
     PostOrder(Ta);
   }
