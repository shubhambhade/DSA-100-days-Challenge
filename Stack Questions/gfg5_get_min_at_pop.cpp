stack<int> _push(int arr[],int n)
{
   stack<int>st;
   for(int i = 0; i < n; i++)
   {
       if(i == 0 )
       {
           st.push(arr[i]);
       }
       else
       {
           st.push(min(arr[i], st.top()));
       }
   }
   return st;
}
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}