int main() {
StackType<int> st;

 if (st.IsEmpty())
{
     cout << "Stack is empty\n";
   }

    st.Push(5);
    st.Push(7);
    st.Push(4);
    st.Push(2);

    if (st.IsEmpty())
        {
        cout << "Stack is empty\n";
    }
     else {
                cout << "Stack is not empty\n";
     }


     if(st.IsFull())
        {
                cout << "Stack is full\n";
     }
     else {
            cout << "Stack is not full\n";
     }


    StackType<int> temp;

    while(!st.IsEmpty())
        {
    temp.Push(st.Top());
    st.Pop();
    }

    while(!temp.IsEmpty())
    {
    int t = temp.Top();
    cout << t << " ";

    temp.Pop();
    st.Push(t);

    }

 st.Push(3);
cout << "\n";



StackType<int> temp2;
while(!st.IsEmpty())
    {
    temp2.Push(st.Top());
    st.Pop();
     }

while(!temp2.IsEmpty())
    {
        int t = temp2.Top();
         cout << t << " ";
        temp2.Pop();
        st.Push(t);
        }

    cout << "\n";

    if(st.IsFull())
    {
    cout << "Stack is full\n";
    }
    else {
    cout << "Stack is not full\n";
        }

    st.Pop();
    st.Pop();
    int top = st.Top();
    cout << top;
    string exp = "(())";
    StackType<char> c;
    for(int i=0; i< exp.length(); i++) {
        if(exp[i] == '(') {
        c.Push(exp[i]);
            continue;

        }

    if (c.IsEmpty()) {

        return false;
            }
    switch(exp[i]) {
    case ')': char x = c.Top();
            c.Pop();

             if (x == '(') {
        cout << "\nbalanced";
                        }
            else {
cout << "\nunbalanced";
}
}
}
};
