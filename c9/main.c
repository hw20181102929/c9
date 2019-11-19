#include <stdio.h>
struct Data
{
    int adress;
    int data;
    int next;
};
void maopao(struct Data *s,int n)
{
    int p,i;
    struct Data t;
    for(p=n-1;p>=0;p--)
    {
        for(i=0;i<p;i++)
        {
            if(s[i].data>s[i+1].data)
            {
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
    }
}
void xuanze(struct Data *s,int n)
{
    int min,i,j;
    struct Data t;
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(s[j].data<s[min].data)
            {
                min=j;
            }
        }
        t=s[i];
        s[i]=s[min];
        s[min]=t;
    }
}
void gaidizhi(struct Data *s,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i].adress==s[j].next)
        }
    }
}
int main()
{
    int n,head;
    scanf("%d %d",&n,&head);
    struct Data s[n];
    int i;
    for( i=0;i<n;i++)
    {
        scanf("%d %d %d",&s[i].adress,&s[i].data,&s[i].next);
    }
    //maopao(s,n);
    xuanze(s,n);
   // cahru();
    gaidizhi(s,n);
    s[i-1].next=-1;
    for(i=0;i<n;i++)
    {
        if(i==0)
        printf("%05d %d %05d",s[i].adress,s[i].data,s[i].next);
        else  if(s[i].next>0)
        printf("->%05d %d %05d",s[i].adress,s[i].data,s[i].next);
        else
        {
            printf("->%05d %d %d",s[i].adress,s[i].data,s[i].next);
            break;
        }
    }
    return 0;
}
