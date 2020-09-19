#include<stdio.h>
int tree_size=20;
int heap_size=0;
int INF=100000;
void swap(int *a,int *b)
{ int t;
  t=*a;
  *a=*b;
  *b=t;
}
int right_child(int a[],int index)
{ if((((2*index)+1)<tree_size) && (index>=1))
  { return (2*index)+1;
  }
  return -1;
}
int left_child(int a[],int index)
{ if(((2*index)<tree_size) && (index>=1))
  { return (2*index);
  }
  return -1;
}
int parent(int a[],int index)
{ if((index>1) && (index<tree_size))
  { return index/2;
  }
  return -1;
}
void max_heapify(int a[], int index) {
  int left_child_index = left_child(a, index);
  int right_child_index = right_child(a, index);
  int largest = index;

  if ((left_child_index <= heap_size) && (left_child_index>0)) {
    if (a[left_child_index] > a[largest]) {
      largest = left_child_index;
    }
  }

  if ((right_child_index <= heap_size && (right_child_index>0))) {
    if (a[right_child_index] > a[largest]) {
      largest = right_child_index;
    }
  }

  if (largest != index) {
    swap(&a[index], &a[largest]);
    max_heapify(a, largest);
  }
}
void build_max_heap(int a[]) {
  int i;
  for(i=heap_size/2; i>=1; i--) {
    max_heapify(a, i);
  }
}

int maximum(int a[]) {
  return a[1];
}
int extract_max(int a[]) {
  int maxm = a[1];
  a[1] = a[heap_size];
  heap_size--;
  max_heapify(a, 1);
  return maxm;
}

void increase_key(int a[], int index, int key) {
  a[index] = key;
  while((index>1) && (a[parent(a, index)] < a[index])) {
    swap(&a[index], &a[parent(a, index)]);
    index = parent(a, index);
  }
}

void decrease_key(int a[], int index, int key) {
  a[index] = key;
  max_heapify(a, index);
}

void insert(int a[], int key) {
  heap_size++;
  a[heap_size] = -1*INF;
  increase_key(a, heap_size, key);
}

void print_heap(int a[]) {
  int i;
  for(i=1; i<=heap_size; i++) {
    printf("%d\n",a[i]);
  }
  printf("\n");
}
int main()
{ int c,i;
  int a[tree_size];
  printf("enter the elements of array\n");
  for(i=0;i<tree_size;++i)
  { printf("enter the data\n");
    scanf("%d",&c);
    insert(a,c);
  }
  print_heap(a);
  increase_key(a, 5, 22);
  print_heap(a);

  decrease_key(a, 1, 13);
  print_heap(a);

  printf("%d\n\n", maximum(a));
  printf("%d\n\n", extract_max(a));

  print_heap(a);

  printf("%d\n", extract_max(a));
  print_heap(a);
  return 0;
}
