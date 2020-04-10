#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
  int top;
  int arr[5];

public:
  stack (){
    top = -1; // every entry in the array is set to zero
    for (int i = 0; i < 5; i++)
    {
      arr[i] = 0;
    }
  }

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
      return popValue;

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
     cout << "5.     peek()  " << endl;
     cout << "6.     count()  " << endl;
     cout << "7.     change()  " << endl;
     cout << "8.     display()  " << endl;
     cout << "9.     clear Screen  " << endl;

  } while(option!=0);


  return 0;

}
