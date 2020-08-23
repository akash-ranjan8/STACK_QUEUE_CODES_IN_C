#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
};
struct node *top=NULL;
void push(int x)
{ struct node *new;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=x;
  new->next=NULL;
  if(top==NULL)
  { top=new;
  }
  else
  { new->next=top;
    top=new;
  }
}
void pop()
{ struct node *t;
  if(top==NULL)
  { printf("UNDERFLOW\n");
  }
  else
  { t=top;
    top=top->next;
    printf("%d",t->data);
  }
}
void main()
{ push(10);
  push(20);
  push(30);
  push(40);
  pop();
  pop();
  pop();
  pop();
}
