#include <iostream>
#include <string>

using namespace std;

class Stack {
        private: // private variables that cant be touched.
        int top;
        int arr[5];

        public:
        Stack (){ // contructor
        top = -1; // every entry in the array is set to zero
        for (int i = 0; i < 5; i++)
        {
        arr[i] = 0;
        }
  }

  //all functions that are used by the stack. Considered methods since they
  //within the stack class


        bool isEmpty()
  {
        if (top == -1)
        return true;
        else
        return false;

  }

        bool isFull()
  {
        if (top ==4 )
        return true;
        else
        return false;
  }

       void push(int val)
  {
       if (isFull())
       {
       cout << "Stack Overflow" << endl;

       }
       else
       {
        top++;
        arr[top] = val;
       }
  }

       int pop()
  {
       if (isEmpty())
       {
       cout << "Stack Underflow " << endl;
       return 0;
  }
       else
       {
       int popvalue = arr[top];
       arr[top] = 0;
       top--;
       return popvalue;

       }
  }

       int count()
  {
       return (top+1);

  }
       int peek(int pos)
       {
       if (isEmpty())
       {
       cout << "Stack Underflow " << endl;
       return 0;
       }
       else
       {
       return arr[pos];

       }
  }


void change(int pos, int val)
{
  arr[pos] = val;
  cout << "value changed at location" << pos << endl;
}

void display ()
{
  cout << "All values in the stack are " << endl;
  for (int i =4; i >= 0; i--)
  {
    cout << arr[i]<< endl;
  }
}


};

int main ()
{
  Stack s1;
  int option, position, value;

  do {
     cout << "What operation do you want to perform? Select Option Number. Enter 0 to exit " << endl;
     cout << "1.     Push " << endl;
     cout << "2.     Pop  " << endl;
     cout << "3.     isEmpty()  " << endl;
     cout << "4.     isFull()  " << endl;
     cout << "5.     Peek()  " << endl;
     cout << "6.     Count()  " << endl;
     cout << "7.     Change()  " << endl;
     cout << "8.     Display()  " << endl;
     cout << "9.     Clear Screen  " << endl;

     cin >> option;

     switch(option)
     {
       case 1:
           cout << "Enter an item to push into the stack" << endl;
           cin >> value;
           s1.push(value);
           break;
       case 2:
           cout << "Pop function called " << endl;
           cout << s1.pop();
           break;
       case 3:
           if(s1.isEmpty())
              cout << "Stack is empty" << endl;
           else
              cout << "Stack is not empty " << endl;
           break;
       case 4:
           if(s1.isFull())
               cout << "Stack is full " << endl;
           else
               cout << "Stack is not full " << endl;
           break;

       case 5:
           cout << "Enter the position you want to peek: " << endl;
           cin >> position;
           cout << "Peek Function Called - " << s1.peek(position) << endl;
           break;

       case 6:
           cout << "Count Function Called " << s1.count() << endl;
           break;

       case 7:
           cout << "Change Function " << endl;
           cout << "Enter position of item you want to change: ";
           cin >> position;
           cout << endl;
           cout << "Enter value of the item you want to change: ";
           cin >> value;
           s1.change(position,value);
           break;
       case 8:
           cout << "Display Function Called ";
           s1.display();
           break;

       case 9:
           system("cls");
           break;
           default:
           cout << "Enter the proper option number " << endl;

     }

  } while(option!=0);


  return 0;

}
