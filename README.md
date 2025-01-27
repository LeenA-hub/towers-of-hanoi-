# towers-of-hanoi-
1) how will the first recursive call to tower() be invoked?
from towers(5,2,3), the first recursive call is n-1 and moves the disks from the "from" (starting) tower (2) to spare tower (1) (we got spare tower to be 1, because spare formula is 6 - from - dest; 6 - 2 - 3 = 1). therefore the values of the first recursive call would be towers(4,2,1).
2) how many recursive calls to towers() will be made before this first recursive call actual returns to the initial invocation?
it takes 5 recursive calls to return to the original function. since n = 4, 3, 2, 1, 0 (that will make n =5), the recursion continues until it meets the base condition (where n = 0). this means 5 calls of n-1 are needed. 
3) once towers(5,2,3) has invoked its first recursive call to towers() and this invocation had returned, what will be printed in stdout? 
"2 3" this move takes the first disk and transfers it from tower 2 to tower 3.
4) how will be the second recursive cal to towers()?
towers(3,2,3). explanation: it move remaining 3 disks from tower 2 to tower 3 and uses tower 1 as spare.
5) for towers(8,1,2), the algorithm need 2^n -1 steps to complete. with n = 8 (8 disks), this equals 255 steps, meaning 255 lines of output.

Description:  
In this lab, I ran the gcc -o command in the terminal, and the program executed correctly. I was able to separate stdout and stderr, and I also figured out how to hide both outputs when necessary.  

When I modified the main() function, I made the changes and didn’t encounter any errors in the terminal. If no arguments were provided when running the towers program, it automatically solved the problem using the default values n = 3, from = 1, and dest = 2. The algorithm also worked as expected when I provided only the numberDisks argument or when I passed all three arguments (numberDisks, fromID, and destID). Everything ran as it should.
