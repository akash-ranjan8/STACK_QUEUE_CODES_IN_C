#include<stdio.h>
#define max 10
int s[max],top;
void push(int s[])
{ int k;
  printf("enter the data to be entered\n");
  scanf("%d",&k);
  if(top==max-1)
  { printf("Overflow\n");
  }
  else
  { top++;
    s[top]=k;
  }
}
void pop(int s[])
{ int x;
  if(top==-1)
  { printf("underflow\n");
  }
  else
  { x=s[top];
    top--;
  }
  printf("Deleted: %d\t\n",x);
}
void display(int s[])
{ int i;
  printf("%d\t",s[top]);
  for(i=top-1;i>=0;--i)
  { printf("%d\t",s[i]);
  }
}
int main()
{ 
  top=-1;
  push(s);
  push(s);
  push(s);
  push(s);
  display(s);
  printf("\n");
  pop(s);
  display(s);
  return 0;
}
