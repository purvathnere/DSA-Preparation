void insertAtBottom(stack<int> &s, int element) {
    // Base case
    if (s.empty()) {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    // Recursive call
    insertAtBottom(s, element);
    s.push(num);
}
void reverseStack(stack<int> &stack) {
//Base case
if(stack.empty())
{
    return;
}
int num = stack.top();
stack.pop();
reverseStack(stack);
insertAtBottom(stack,num);
}
