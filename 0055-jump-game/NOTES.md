​ARRAY
 //We start from the second last index and increase minjump by 1 for each position. If at a particular index, the maximum jump length at that position is greater than or equal to the minimum jump length required, i.e., nums[i]>=minjump, then we can say that we can reach the last index from that position. Thus, we reduce the minimum jump length required to zero if the condition is satisfied so that for the next position when iterating backwards the minimum jump length required is 1 after incrementation.
        

