#include<bits/stdc++.h>
using namespace std;
  
// function to check if input queue is
// permutable to output queue
bool checkStackPermutation(int ip[], int op[], int n)
{
    // Input queue
    queue<int> input;
    for (int i=0;i<n;i++)
        input.push(ip[i]);
  
    // output queue
    queue<int> output;
    for (int i=0;i<n;i++)
        output.push(op[i]);
  
    // stack to be used for permutation
    stack <int> tempStack;
    while (!input.empty())
    {
        int ele = input.front();
        input.pop();
        if (ele == output.front())
        {
            output.pop();
            while (!tempStack.empty())
            {
                if (tempStack.top() == output.front())
                {
                    tempStack.pop();
                    output.pop();
                }
                else
                    break;
            }
        }
        else
            tempStack.push(ele);
    }
  
    // If after processing, both input queue and
    // stack are empty then the input queue is
    // permutable otherwise not.
    return (input.empty()&&tempStack.empty());
}
  
// Driver program to test above function
int main()
{
    // Input Queue
    int n;
    cout<<"Enter the length of array."<<endl;
    cin>>n;
    int input[n];
    cout<<"Enter the input array"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        input[i]=a;
    }
    // Output Queue
    int output[n];
    cout<<"Enter the output array"<<endl;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        output[i]=a;
    }

    if (checkStackPermutation(input, output, n))
        cout << "Yes";
    else
        cout << "Not Possible";
    return 0;
}