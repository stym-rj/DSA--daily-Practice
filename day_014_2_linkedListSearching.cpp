// An IT company named as Cloudo_Tech is maintaining the records of its employees using a linked list where the following details of employees are maintained:

// Name
// Employee ID
// Salary
// The company management is looking for an interface where they can search the details of any employee using the Employee ID. You have to implement the solution for the same in the following function:

// void search_employee(int emp_id)

// Input Format

// First line must take the number of employees N as input Next N lines will accept the details of N employees Last line will accept the Employee ID to be searched

// Example:

// 3
// Andrew 119 34000
// Robert 72 56000
// Williams 210 29500
// 72

// Constraints

// N > 0 where N is the Number of employees

// Employee Id is Unique.

// Output Format

// Output should display the name and salary of the employee:

// Robert 56000

// If Employee ID is not found then display

// Employee does not exist

// Sample Input 0

// 3
// Ravi 16920 15000
// Arvind 16921 18000
// Priyanka 21427 16500
// 16920
// Sample Output 0

// Ravi 15000



#include <iostream>
using namespace std;

class Node{
    public:
        string name;
        int emp_id;
        int salary;
        Node* next;
        Node(string _name, int _emp_id, int _salary){
            name=_name;
            emp_id=_emp_id;
            salary=_salary;
            next=NULL;
        }

        Node* insertAtEnd(string _name, int _emp_id, int _salary){
            Node* temp= new Node(_name, _emp_id, _salary);
            if(this==NULL)      return temp;

            Node* curr=this;

            while(curr->next!=NULL)     curr=curr->next;
            curr->next=temp;

            return this;
        }

        void searchLL(int _emp_id){
            Node* curr=this;
            
            int count=0;
            while(curr!=NULL){
                if(curr->emp_id==_emp_id){
                    cout<<curr->name<<" "<<curr->salary<<endl;
                    count++;
                    break;
                }
                curr=curr->next;
            }

            if(!count)  cout<<"Employee does not exist"<<endl;
        }

};

int main(){
    
    int size;
    cin>>size;

    Node* head=NULL;
    for(int i= 0 ; i< size ; i ++){
        string name;
        int emp_id, salary;
        cin>>name>>emp_id>>salary;
        head=head->insertAtEnd(name, emp_id, salary);
    }

    int id;
    cin>>id;
    head->searchLL(id);

    return 0;
}