#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
  struct node *next;
};
struct queue
{ struct node *front;
  struct node *rear;
};
void create(struct queue *q,int k)
{ struct node *new;
  new=(struct node*)malloc(sizeof(struct node));
  new->data=k;
  new->next=NULL;
  q=(struct queue*)malloc(sizeof(struct queue));
  q->front=q->rear=NULL;
  if(q->rear==NULL)
  { q->front=q->rear=new;
  }
 
    q->rear->next=new;
    q->rear=new;
   
    
  }

void delete(struct queue *q)
{ if(q->front==NULL)
  { printf("empty\n");
  }
  
    struct node *temp=q->front;
    q->front=q->front->next;
    if(q->front==NULL)
    { q->rear=NULL;
    }
}
void display(struct queue *q)
{ struct node *t1=q->front;
  struct node *t2=q->rear;
  while(t1!=t2)
  { printf("%d",t2->data);
    t2=t2->next;
  }
}
void main()
{ struct queue *t=(struct queue*)malloc(sizeof(struct queue));
  create(t,1);
  create(t,2);
  create(t,3);
  create(t,4);
  create(t,5);
  create(t,6);
  display(t);
  delete(t);
  delete(t);
  delete(t);
  display(t);
}
  

