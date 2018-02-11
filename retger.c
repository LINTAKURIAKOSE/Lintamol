#include<stdio.h>
void onevar(int,char);
int twovar(int,int,char);
int main()
{
  char s;
  int n;
  printf("1.add\n2.sub\n3.div\n4.mul\n");
  scanf("%c",&s);
  switch(s)
  {
    case'+':printf("1.onevar\n2.twovar\n");
           if(n==1)
           {
             printf("enter variable\n");
             scanf("%d",&n);
             onevar(n,s);
           }
           else
           {
             twovar(n,n,s);
           }
           case'-':printf("1.onevar\n2.twovar\n");
           if(n==1)
           {
             printf("enter variable\n");
             scanf("%d",&n);
             onevar(n,s);
           }
           else
           {
             twovar(n,n,s);
           }
           case'/':printf("1.onevar\n2.twovar\n");
           if(n==1)
           {
             printf("enter variable\n");
             scanf("%d",&n);
             onevar(n,s);
           }
           else
           {
             twovar(n,n,s);
           }
           case'*':printf("1.onevar\n2.twovar\n");
           if(n==1)
           {
             printf("enter variable\n");
             scanf("%d",&n);
             onevar(n,s);
           }
           else
           {
             twovar(n,n,s);
           }
  
           void onevar(int a,char b )
           {
             if(s='+')
             {
               a+=b;
             }
             else if(s='-')
             {
               a-=b;
             }
             else if(s='/')
             {
               a/=b;
             }
             else(s='*')
             {
               a*=b;
             }
           }
  }
          int twovar(int a,int b,char c)
          {
            if(s='+')
            {
              a=b+c;
            }
            else if(s='-')
            {
              a=b-c;
            }
            else if(s='/')
            {
             a=b/c; 
            }
            else(s='*')
            {
              a=b*c;
            }
         }   }
         
          
