struct node
{
int data;
struct node *next;
};



int getNth(struct node *ptr,int n)
{
if(n<0)
assert(0);
while(n>0 && ptr!=NULL)
{
ptr=ptr->next;
n--;
}
if(ptr!=NULL)
return ptr->data;
else
assert(0);
}

void delete(struct node *ptr)
{
struct node *temp=ptr->next;
ptr->data=temp->data;
ptr->next=temp->next;
free(temp);
}


void printMiddle(struct node *ptr) //if count is not known already
{
struct node *ptr1,*ptr2;
if(ptr!=NULL)
{
ptr1=ptr; //traverse 2 nodes
ptr2=ptr; //traverse 1 node
while(ptr1!=NULL && ptr1->next!=NULL)
{
ptr1=ptr1->next->next;
ptr2=ptr2->next;
}
printf("Data at Middle Node of Linked List is:%d",ptr2->data):
}
else
printf("You passed NULL pointer\n");
}

void printNthfromLast(struct node *ptr,int n)
{
struct node *ptr1,*ptr2;
if(ptr!=NULL)
{
ptr1=ptr; 
ptr2=ptr;
while(n>0 && ptr1!=NULL)
{
ptr1=ptr1->next;
n--;
}
if(n==0)
{
while(ptr1!=NULL)
{
ptr1=ptr1->next;
ptr2=ptr2->next;
}
}
else
printf("You entered invalid n");
}
else
printf("You passed Null pointer");
}

void deleteList(struct node *ptr)
{
struct node *temp;
while(ptr!=NULL)
{
temp=ptr;
ptr=ptr->next;
free(temp);
}
}


int count(struct node *ptr,int val)
{
int count=0;
while(ptr!=NULL)
{
if(val==ptr->data)
count++
}
return count;
}