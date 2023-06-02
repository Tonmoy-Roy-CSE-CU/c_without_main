#include<stdio.h>
#define decode(s,t,u,m,p,e,d) m##s##u##t
#define begin decode(a,n,i,m,a,t,e)

int begin()
{
  printf("Hello World!");
}

/*yes it is possible to write a program without main().

But it uses main() indirectly.
define decode(s,t,u,m,p,e,d) m##s##u##t
What is the preprocessor doing here. The macro decode(s,t,u,m,p,e,d) is being expanded as “msut” (The ## operator merges m,s,u & t into msut). The logic is when you pass (s,t,u,m,p,e,d) as argument it merges the 4th,1st,3rd & the 2nd characters(tokens)

Now look at the third line of the program –

define begin decode(a,n,i,m,a,r,e)
Here the preprocessor replaces the macro “begin” with the expansion decode(a,n,i,m,a,r,e). According to the macro definition in the previous line the argument must be expanded so that the 4th,1st,3rd & the 2nd characters must be merged. In the argument(a,n,i,m,a,r,e) 4th,1st,3rd & the 2nd characters are ‘m’,’a’,’i’ & ‘n’.

so it will replace begin by main() by the preprocessor before the program is passed on for the compiler. That’s it…*/