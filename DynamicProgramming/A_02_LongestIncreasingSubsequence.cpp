/*
Reference - https://www.youtube.com/watch?v=aPQY__2H3tE
Longest Increasing subsequence is the sequence have both larger value and 
Index from previous element

a. LIS(3 1 8 2 5) - 1 2 5 
   Ans = 3

b. LIS(5 2 8 6 3 6 9 5) - 2 3 6 9
   Ans = 4

Solution:
1. Visualize the problem

3 -> 8
3 -> 5
1 -> 8
1 -> 2 -> 5
8
2 -> 5

2. Find the appropriate sub problem
Subset of sequence
Subsequence LIS[k] = LIS ending at index k
k - length like window

3. finding relations among sub problem
LIS[4] = 1 + max {LIS[0], LIS[1], LIS[3]}

4. Generalize
LIS[5] = 1 + max{LIS[k] | k < 5, A[k] < A[5]}
means index k is less than 5 && value A[k] < A[5]

5. Sequence Left to right

6. Implementation
LIS[n] = 1 + max {LIS[k] if k < n and A[k] < A[n]}

def lis(A):
    L = 1 * len(A)
    for i in range(1, len(L)):
        subproblem = [L[k] for k in range(i) if A[k] < A[i]]
        L[i] = 1 + max(subproblems, default = 0)
    return max(L, default = 0)

*/
