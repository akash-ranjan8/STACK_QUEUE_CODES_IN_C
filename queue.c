#include<stdio.h>
int rear=0;
int front=0;
void create(int n,int a[n])
{
  
    int ele;
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    a[rear]=ele;
    ++rear;
  
}
void insert(int n,int a[n])
{ if(front==rear)
  { printf("queue is full\n");
  }
  else
  { int ele;
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    a[rear]=ele;
    ++rear;
  }
}
void delete(int a[])
{ if(front==rear)
  { printf("queue is empty\n");
  }
  else
  { printf("\ndeleted element is:%d",a[front]);
    for(int i=0;i<rear-1;++i)
    { a[i]=a[i+1];
    }
    --rear;
   }
}
void traverse(int n,int a[n])
{ if(front==rear)
  { printf("queue is empty\n");
  }
  else
  { printf("queue elements are:\n");
    for(int i=front;i<rear;++i)
    { printf("%d\n",a[i]);
    }
   }
}
void main()
{ int n;
  printf("enter the size of queue\n");
  scanf("%d",&n);
  int q[n];
  create(n,q);
  create(n,q);
  create(n,q);
  traverse(n,q);
  insert(n,q);
  insert(n,q);
  traverse(n,q);
  delete(q);
  delete(q);
  traverse(n,q);
}
  
