#include<iostream>
using namespace std;
struct node
{
int data;
node *next;
};

int main( )
{
int choice, position;
int value;
node *head = NULL;
while (1)
{
cout<<endl<<"---------------------------------"<<endl;
cout<<endl<<"Operations on Singly Linked List"<<endl;
cout<<endl<<"---------------------------------"<<endl;
cout<<"1.Insert Node at the Beginning"<<endl;
cout<<"2.Insert Node at the End"<<endl;
cout<<"3.Insert Node at Position"<<endl;
cout<<"4.Delete Node at the Beginning"<<endl;
cout<<"5.Delete Node at the End"<<endl;
cout<<"6.Delete a Particular Node"<<endl;
cout<<"7.Sort Link List"<<endl;
cout<<"8.Display Linked List"<<endl;
cout<<"9.Exit "<<endl;
cout<<"Enter your choice : ";
cin>>choice;

switch(choice)
{
     case 1:
     node *temp;
     
     cout<<" "<<endl;
     cout<<"Inserting Node at Beginning: "<<endl;
     cout<<"Enter the value to be inserted: ";
     cin>>value;

     temp = (node*)malloc(sizeof(node));
     temp->data=value;
     temp->next=head;
     head=temp;
     cout<<endl;
     cout<<"Note: Execute choice 8 to view the Element of the Linked List...";
     cout<<endl;
     break;
     
     
     case 2:
     cout<<endl;
     cout<<"Inserting Node at Last: "<<endl;
     cout<<"Enter the value to be inserted: ";
     cin>>value;
     node*temp1;
     temp1=(node*)malloc(sizeof(node));
     temp1->data=value;
     while(temp1->next!=NULL)
     {
         temp1=temp1->next;
         
     }
     node*temp2;
     temp2=new node;
     temp2->data=value;
     temp2->next=NULL;
     temp1->next=temp2;

    cout<<endl;
     cout<<"Note: Execute choice 8 to view the Element of the Linked List...";
cout<<endl;
     break;
     
     
     case 3:

     cout<<endl;
     cout<<"Inserting Node at a given position:"<<endl;
     cout<<"Enter the node position: ";
     cin>>position;
     cout<<"Node will be added after node "<<position<<endl;
     cout<<"Enter the value to be inserted: ";
     cin>>value;

     node*temp3;
     temp3=(node*)malloc(sizeof(node));
     temp3=head;
     if(head!=NULL)
     {
         for (int i=1; i<position;i++)
{
temp3= temp3->next;
if (temp3==NULL)
{
cout << position << "\nthe position is not exist" << endl;
cout<<endl;
break;
}
}
     }
node*temp4;
temp4 = (node*)malloc(sizeof(node));
temp4->data=value;
temp4->next=temp3->next;
temp3->next = temp4;

cout<<endl;
cout << "Note: Execute choice 8 to view the Element of the Linked List...";
cout<<endl;

break;

case 4:

cout<<endl;
cout<<"Delete Node at the Beginning"<<endl;
node*temp5;
temp5=(node*)malloc(sizeof(node));
temp5=head;
head=temp5->next;
free(temp5);

cout<<endl;
cout << "Note: Execute choice 8 to view the Element of the Linked List...";
cout<<endl;


break;


case 5:

cout<<endl;
cout<<"Delete at the End "<<endl;
node *temp6;
temp6=(node*)malloc(sizeof(node));
temp6 = head;
node *old_temp;
old_temp =(node*)malloc(sizeof(node));
while(temp6->next!=NULL)
{
    old_temp = temp6;
    temp6 = temp6->next;
}
old_temp->next=NULL;
free(temp6);

cout<<endl;
cout << "Note: Execute choice 8 to view the Element of the Linked List...";
cout<<endl;

break;

case 6:

cout<<endl;
cout<<"Delete after the specified node:"<<endl;
cout<<"Enter the node position: ";
cin>>position;
cout<<"Node at position "<<position<<" will be deleted "<<endl;
node *temp7;
temp7 =(node*)malloc(sizeof(node));
temp7 = head;
node *old_temp1;
old_temp1 =new node;
old_temp1 = temp7;
if(head!=NULL)
{
    for( int i = 1 ; i <position; i++ )
    {
        old_temp1 = temp7;
        temp7 = temp7->next; 
}
}
old_temp1->next = temp7->next;
free(temp7); 

cout<<endl;
cout << "Note: Execute choice 8 to view the Element of the Linked List...";
cout<<endl;

break;

case 7:
cout<<endl;
cout<<"Sorting the elements of the Linked List: "<<endl;
node*temp8;
temp8=(node*)malloc(sizeof(node));

node*temp9;
temp9=(node*)malloc(sizeof(node));
int data1;
data1=0;
for( temp8 = head ; temp8!=NULL ; temp8 = temp8->next )
{
    for( temp9 = temp9->next ; temp9!=NULL ; temp9 = temp9->next )
    {
        if( temp8->data> temp9->data)
        {
            data1 = temp8->data;
            temp8->data = temp9->data;
            temp9->data = data1; 
        }
    }
}
cout<<endl;
cout << "\n\n Note: Execute choice 8 to view the Element of the Linked List....\n\n";cout<<endl;

break;

case 8:
cout<<endl;
node*tempS;
tempS=head;
cout<<"Display Elements in Linked List:"<<endl;

if(tempS!=NULL)
{
    cout<<tempS->data<<" ";
    tempS = tempS->next;
}else
{
    cout<<"The link is empty.";
}
cout<<endl;

break;


case 9:
cout<<"Exiting..."<<endl;
exit(1);
break;

default:
cout<<"Wrong choice"<<endl;


}//end of switch
}//end of while
return 0;
}//end of main