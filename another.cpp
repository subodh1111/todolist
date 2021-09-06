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
                cout<<"item is :\n";
                cout<<"priority item\n";
                while(ptr !=NULL)
                {
                    cout<< " "<<ptr->listData;
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
                    cin>>item;
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