#include<stdio.h>
# define m 100
int a[m];
int front=0;
int rear=0;
int top=-1;
int push(int x)
  { if(top==m-1)
    {  printf("OVERFLOW\n");
    }
    else
    { top++;
      a[top]=x;
      printf("%d",x);
    }
  }
  int pop()
  { if(top==-1)
    { printf("UNDERFLOW\n");
    }
    else
    { int x=a[top];
      --top;
      return x; 
    }
  }
void create(int n,int k[n])
{
  
    int ele;
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    k[rear]=ele;
    ++rear;
  
}
void insert(int n,int k[n])
{ if(front==rear)
  { printf("queue is full\n");
  }
  else
  { int ele;
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    k[rear]=ele;
    ++rear;
  }
}
int delete(int k[])
{ if(front==rear)
  { printf("queue is empty\n");
  }
  else
  { printf("\ndeleted element is:%d",a[front]);
    for(int i=0;i<rear-1;++i)
    { int x=k[rear];
      k[i]=k[i+1];
      return x;
    }
    --rear;
   }
   
}
void traverse(int n,int k[n])
{ if(front==rear)
  { printf("queue is empty\n");
  }
  else
  { printf("queue elements are:\n");
    for(int i=front;i<rear;++i)
    { printf("%d\n",k[i]);
    }
   }
}
void reverse(int n,int z[n])
{ int a=push(delete(z));
  int b=push(delete(z));
  int c=push(delete(z));
  int d=push(delete(z));
  int e=push(delete(z));
  create(z,a);
  create(z,b);
  create(z,c);
  create(z,d);
  create(z,e);
  traverse(n,z);
}  
void main()
{ int n;
  printf("enter the no. of queue elements\n");
  scanf("%d",&n);
  int q[n];
  create(n,q);
  create(n,q);
  create(n,q);
  traverse(n,q);
  insert(n,q);
  insert(n,q);
  traverse(n,q);
  reverse(n,q);
}
