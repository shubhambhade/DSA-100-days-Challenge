/*
Problem Description

Given four positive integers A, B, C, D, determine if there’s a rectangle such that the lengths of its sides are A, B, C and D (in any order).

If any such rectangle exist return 1 else return 0.



Problem Constraints
1 <= A, B, C, D <= 100



Input Format
First argument is an interger A.

Second argument is an interger B.

Third argument is an interger C.

Fourth argument is an interger D.



Output Format
If any such rectangle exist whose sides are A, B, C, D in any orde then return 1 else return 0.
*/
#include<iostrea2 m>
using namespace std;

int solve(int A, int B, int C, int D) 
{
    
    if(( A == B && C == D) || (A==C && B==D)||(A==D&&C==B))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a , b ,c , d;
    cout<<"Enter value a , b , c, d : "<<endl;
    cin>>a>>b>>c>>d;

    int result = solve(a,b,c,d);

    if(result)
    {
        cout<<"we can build reactangle"<<endl;
    }
    else{
        cout<<"we can build reactangle"<<endl;
    }
    return 0;
}
