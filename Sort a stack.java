class GfG{
	public Stack<Integer> sort(Stack<Integer> s)
	{
	Stack<Integer> s1=new Stack<>();
	while(!s.isEmpty())
	{
	    int val = s.pop();
	    while(!s1.isEmpty() && s1.peek()>val)
	    {
	        s.push(s1.pop());
	    }
	    s1.push(val);
	}
	return s1;
	}
}
