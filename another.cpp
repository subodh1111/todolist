#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

 
  struct todo
    {
        string listData;
        int priority;
        
        todo *next;
    };
    
    todo *start =NULL;
    
    void add(string item, int priority)
    {
        todo *temp;
        todo *rear;
        
        temp = new todo;
        temp ->listData = item;
        temp ->priority = priority;
        
        if(start == NULL || priority <= start->priority)
        {
            
            temp->next = start;
            start = temp;
            
        }
        else
        {
            
            rear = start;
            
            while( rear->next != NULL && rear -> next->priority <= priority)
            {
                rear= rear->next;
                
            }
            
            temp->next = rear ->next;
            rear ->next= temp;
        }
    }
        
        void del()
        {
            todo *temp;
            if(start == NULL){
            cout<<("No elements on the item\n");
            }
            else
            {
                temp = start;
                cout<<"Deleted work is \n"<<temp->listData<<endl;
                start = start->next;
                free(temp);
                
            }
            
        }
            
            
        void display()
        {
            todo *ptr;
            ptr = start;
            
            if(start == NULL){
            cout<<"empty\n";
            }
            else
            {
                while(ptr !=NULL)
                {
                    cout<<"item is : "<<ptr->listData<<" and its priority is :"<<ptr->priority<<"\n";
                    ptr = ptr->next;
                }
            }
        }
        int main()
        {
            int choice=0, priority;
             string item;
             while(choice!=4){
                cout<<"1.Insert your task\n";
                cout<<"2.delete\n";
                cout<<"3.Display the tasks\n";
                cout<<"4.Exit\n";
                
                cout<<"Enter your choice : ";
                cin>>choice;
                switch(choice)
                {
                    case 1:
                    cout<<"Input the data to be added in the item : " ; 
                    getline(cin>>ws, item);
                    cout<<"enter its priority : ";
                    cin>>priority;
                    add(item,priority);
                    break;
                    
                    case 2:
                    del();
                    break;
                    
                    case 3:
                    display();
                    break;
                    
                    case 4:
                    break;
                    
                     default:
                     cout<<"invalid choice\n";
                }
        }
    } 










#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

 
  struct todo
    {
        string listData;
        int priority;
        
        todo *next;
    };
    
    todo *start =NULL;
    
    
    //Adding items in the list
    void add(string item, int priority)
    {
        todo *temp;
        todo *rear;
        
        temp = new todo;
        temp ->listData = item;
        temp ->priority = priority;
        
        if(start == NULL || priority <= start->priority)
        {
            
            temp->next = start;
            start = temp;
            
        }
        else
        {
            
            rear = start;
            
            while( rear->next != NULL && rear -> next->priority <= priority)
            {
                rear= rear->next;
                
            }
            
            temp->next = rear ->next;
            rear ->next= temp;
        }
    }
        
        void del()
        {
            todo *temp;
            if(start == NULL){
            cout<<("No tasks available on the list to remove :\n");
            }
            else
            {
                temp = start;
                cout<<"Deleted Task is \n"<<"\t"<<temp->listData<<endl;
                start = start->next;
                free(temp);
                
            }
            
        }
            
            
        void display()
        {
            todo *ptr;
            ptr = start;
            
            if(start == NULL){
            cout<<"empty\n";
            cout<<"\n"<<"***********************************************************************************"<<"\n";
            }
            else
            {
                
                    cout<<"********************TO-DO List************************";
                    cout<<"\n"<<"\t  Priority Is :"<<"\t\t"<<"Tasks :";
                    
                    
                
                while(ptr !=NULL)
                {
                    cout<< "\n "<<"\t\t"<<ptr->priority<<"\t\t";
                    cout<<"    "<<ptr->listData<<" ";
                    cout<<"\n";
                    
                    
                    
                    
                    
                    ptr = ptr->next;
                }
                
            }
        }
        
        void peek()
        {
            todo *ptr1;
            ptr1=start;
            if(ptr1 != NULL)
            {
                cout<<"\n"<<"******************************************************************"<<"\n";
                cout<<"Complete the following task ASAP \n"<<"\t\t"<<ptr1->listData;
                cout<<"\n";
            }
            
        }
        
        
        
        int main()
        {
            int choice=0, priority;
             string item;
             while(choice!=4){
                 cout<<"***********************************************************"<<"\n";
                 cout<<"\n";
                cout<<"\t\t 1.Insert your task\n";
                cout<<"\t\t 2.delete\n";
                cout<<"\t\t 3.Display the tasks\n";
                cout<<"\t\t 4.Exit\n"<<"\n";
                cout<<"***********************************************************"<<"\n";
                cout<<"\t\t Enter your choice : ";
                cin>>choice;
                cout<<"***********************************************************"<<"\n";
                switch(choice)
                {
                    case 1:
                    
                    cout<<"\n"<<"Input the task to be added in the List : " ; 
                    getline(cin>>ws, item);
                    
                    cout<<"enter its priority : ";
                    cin>>priority;
                    cout<<"\n"<<"******The task has been added to the list******";
                    cout<<"\n";
                    add(item,priority);
                    
                    break;
                    
                    case 2:
                    del();
                    break;
                    
                    case 3:
                    display();
                    
                    cout<<"\n";
                    peek();
                    break;
                    
                    case 4:
                    break;
                    
                    
                    
                     default:
                     cout<<"invalid choice\n";
                }
        }
    }

