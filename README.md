
<h2>  DataStructures in C++ </h2>

<br>
<h2>Stack Data Structure</h2> 
<p>
  A stack is a linear data structure that follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first.
<br>
You can think of the stack data structure as the pile of plates on top of another.
</p> <br>

<h3>LIFO Principle of Stack</h3> <br>
<p>In programming terms, putting an item on top of the stack is called push and removing an item is called pop.</p> <br><br>

<h3>Basic Operations of Stack</h3>
<b>There are some basic operations that allow us to perform different actions on a stack.</b>
<pre>
Push: Add an element to the top of a stack
Pop: Remove an element from the top of a stack
IsEmpty: Check if the stack is empty
IsFull: Check if the stack is full
Peek: Get the value of the top element without removing it
</pre>
<br>
<pre>
<h3>Working of Stack Data Structure</h3>
The operations work as follows:

A pointer called TOP is used to keep track of the top element in the stack.
When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
On popping an element, we return the element pointed to by TOP and reduce its value.
Before pushing, we check if the stack is already full
Before popping, we check if the stack is already empty
</pre>
 
<h4>Stack Time Complexity</h4> 
<p>For the array-based implementation of a stack, the push and pop operations take constant time, i.e. O(1).</p>
<br>

<h3>Applications of Stack Data Structure</h3>
<p>
  Although stack is a simple data structure to implement, it is very powerful. The most common uses of a stack are:

To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack, you will get the letters in reverse order. <br>
<b>In compilers</b> - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by converting the expression to prefix or postfix form.<br>
<b>In browsers </b>- The back button in a browser saves all the URLs you have visited previously in a stack. <br> Each time you visit a new page, it is added on top of the stack. When you press the back button, the current URL is removed from the stack, and the previous URL is accessed.
</p>


<h4>Updating soon </h4> 
