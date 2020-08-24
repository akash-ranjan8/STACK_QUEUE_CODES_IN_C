//STATIC ARRAY CONTAINING TWO STACKS
#include<stdio.h>
int main()
{ int n,i,top1,top2,k;
  printf("enter the size of array\n");
  scanf("%d",&n);
  int s[n];
  top1=0;
  top2=n-1;
  int choice;
  int flag=0;
  while(flag!=1)
  {
    printf("enter your choice(1-6)\n");
    scanf("%d",&choice);
    switch(choice)
    { case 1:printf("\n1.PUSH AT THE FRONT END\n");
             if(top1==top2+1)
             { printf("\nOverflow\n");
             }
             else
             { printf("enter the data\n");
               scanf("%d",&k);
               s[top1]=k;
               ++top1;
             }
             break;
      case 2:printf("\n2.PUSH AT THE END\n");
             if(top1==top2+1)
             { printf("\nOverflow\n");
             }
             else
             { printf("enter the data\n");
               scanf("%d",&k);
               s[top2]=k;
               --top2;
             }
             break;
      case 3:printf("\n3.DISPLAY 1ST STACK\n");
             if(top1==0)
             { printf("\nEmpty stack\n");
             }
             else
             { for(i=top1;i>=0;--i)
               { printf("%d\t",s[i]);
               }
             }
             break;
      case 4:printf("\n4.DISPLAY 2ND STACK\n");
             if(top2==n-1)
             { printf("\nEmpty stack\n");
             }
             else
             { for(i=top2;i<n;++i)
               { printf("%d\t",s[i]);
               }
             }
             break;
      case 5:printf("\n5.POP FROM STACK 1\n");
             if(top1==0)
             { printf("\nUnderflow\n");
             }
             else
             { int x=s[top1];
               --top1;
               printf("Deleted: %d\n",x);
             }
             break;
      case 6:printf("\n6.POP FROM STACK 2\n");
             if(top2==n-1)
             { printf("\nUnderflow\n");
             }
             else
             { int x=s[top2];
               ++top2;
               printf("Deleted: %d\n",x);
             }
             break;
     default:flag=1;
             break;
    }
   }
   return 0;
}
  
    
  
  
