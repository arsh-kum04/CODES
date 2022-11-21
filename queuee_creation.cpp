#include <iostream>
using namespace std;

class queue
{
    // propertiesss
public:
    int *arr, front, rear, size;
    // behavior of class stack
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    };
    void enqueue(int n)
    {
        if (rear == size)
        {
            cout << "stax is overflowed" << endl;
        }
        else
        {
            arr[rear] = n;
            rear++;
        }
    }
    int dequeue()
    {
        int ans;
        if (rear == front)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
             ans = arr[front];
            arr[front] = -1;
            front++;
            if (rear == front)
            {
                rear = 0;
                front = 0;
            }
            
        }
        return ans;
    }
    int frontt()
    {
        if (rear == front)

        {
            cout << "queue is empty" << endl;
        }
        
        
            return arr[front];
    }
    bool isempty()
    {
        if (rear==front)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    queue st(5);
    st.enqueue(7);
    cout << st.frontt() << endl;
    st.enqueue(10);
    cout << st.frontt() << endl;
    st.enqueue(18);
    cout << st.frontt() << endl;
    st.enqueue(11);
    cout << st.frontt() << endl;
    st.dequeue();
    cout << st.frontt() << endl;
    st.dequeue();
    cout << st.frontt() << endl;
    st.dequeue();
    cout << st.frontt() << endl;
    st.dequeue();
    cout << st.frontt() << endl;
    if (st.isempty())
    {
        cout << "empty queue" << endl;
    }
    else
    {
        cout << "not empty queue" << endl;
    }

    return 0;
}