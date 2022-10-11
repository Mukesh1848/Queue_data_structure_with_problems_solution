//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    
    s1.push(x); 
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
     
     // if both stacks are empty
if (s1.empty() && s2.empty()) {
 return -1;
}
// if s2 is empty, move
// elements from s1
if (s2.empty()) {
while (!s1.empty()) {
s2.push(s1.top());
s1.pop();
}
}
// return the top item from s2
int x = s2.top();
s2.pop();
return x;
}
