// The LPU named as Fees_Due_Record is maintaining the records of its student Fee details using a linked list where the following details of employees are maintained:

// Student Registration Number
// Name
// Due Fee
// The LPU is looking for an interface where they can search the details of student who have fee due more than 25000. You have to implement the solution for the same in the following function: void Insert_Details(int , string, int ) void Fees_Due_Details()

// Input Format

// Line 1: take the number of Students N as input **Line 2: ** accept the details of N Students

// Example: 5
// 101 Rahul 34000
// 102 Ram 56000
// 103 Srinivas 12500
// 105 Krishna 1500
// 105 Radha 25500

// Constraints

// N > 0 where N is the Number of Student

// Student Registration number should be unique.

// Output Format

// Output should display the Registration number , name and Fee_due of the employee:
// 101 Rahul 34000
// 102 Ram 56000
// 105 Radha 25500 3 number of student have due more than 25000

// If no one have fee due more than 25000 than output display Students does not have fee due more than 25000

// Sample Input 0

// 5
// 101 Ram 4500
// 102 Shyam 56000
// 103 Karan 15000
// 104 Kiran 35000
// 105 Shyam 90000
// Sample Output 0

// 102 Shyam 56000
// 104 Kiran 35000
// 105 Shyam 90000
// Explanation 0

// Enter the number of Student : 5 101 Ram 4500 102 Shyam 56000 103 Karan 15000 104 Kiran 35000 105 Shyam 90000 The Student Details have fee due more than 25000 : 102 Shyam 56000 104 Kiran 35000 105 Shyam 90000

#include <iostream>
using namespace std;

class Node{
    public:
        int reg_no;
        string name;
        int fee;
        Node* next;

        Node(int _reg_no, string _name, int _fee){
            reg_no=_reg_no;
            name=_name;
            fee=_fee;
            next=NULL;
        }

        Node* Insert_Details(int _reg_no, string _name, int _fee){
            Node* temp=new Node(_reg_no, _name, _fee);
            if(this==NULL)  return temp;

            Node* curr=this;

            while(curr->next!=NULL){
                curr=curr->next;
            }
            curr->next=temp;

            return this;
        }

        void Fees_Due_Details(){
            Node* curr=this;

            int count =0;
            while(curr!=NULL){
                if(curr->fee>25000){
                    cout<<curr->reg_no<<" "<<curr->name<<" "<<curr->fee<<endl;
                    count++;
                }
                curr=curr->next;
            }
            if(!count)  cout<<"Students does not have fee due more than 25000"<<endl;
        }

};

int main(){
    int size;
    cin>>size;

    if(size<1) return 0;

    Node* head=NULL;
    for( int i = 0 ; i < size ; i++ ){
        int reg, fee;
        string name;
        cin>>reg>>name>>fee;
        head=head->Insert_Details(reg, name, fee);
    }

    head->Fees_Due_Details();
}