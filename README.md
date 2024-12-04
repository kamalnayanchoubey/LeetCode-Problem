#LeetCode Probleam
Remove All Occurrences of a Substring
Problem No=1910 medium 

solve valid palindrome 

(1)Approach
st=0, end = n-1
while(st < end){
    is AlphaNum(!str[st]) st++; continue;
    is AlphaNum(!str[end]) end --; continue;
    if (str [st]==str[end])
}


(2)Approach

1str.find (substr)<str.length()
2str.erase(start,end)
[st,end]


concept
while(s.length()>0 && s.find(part)<s.length{
    s.earase[st.length]
}




#LeetCode Problem
Reverse Words in a String Problem No 151 Medium
<br>
Approach 
<br>
Reverse(s.begin(), s.end());
<br>
for(i=0; i<n; i++)
{
<br>
string word = "";
<br>
while(i<n && s[i]! =' '){
<br>
word += s[i];
<br>

i++;
}
<br>
reserve(word.begin(), word.end());
<br>
if (word.begin() >0)
<br>
ans +="" + word;
}

<br>


 PROBLEM 773 Hard 
 <br>
 Hard Problem LeetCode Problem name(773) Sliding PuZZle
 <br> 
 On an 2 x 3 board, there are five tiles labeled from 1 to 5, and an empty square represented by 0. A move consists of choosing 0 and a 4-directionally adjacent number and swapping it.
 <br>

The state of the board is solved if and only if the board is [[1,2,3],[4,5,0]].
<br>
Given the puzzle board board, return the least number of moves required so that the state of the board is solved. If it is impossible for the state of the board to be solved, return -1.

 
*Approach
<br>
(1) The board is represented by a string of fixed len 6, say from start converting to target
<br>
(2)Since only 0 can be swapped with its adjacent cells, let pos0 denote 0's position
<br>
(3)the queue q stores the info pair (state string, pos0)
<br>
(4)let unordered_set<string> viz to record the states visited, there are at most 720 states. This part can be replaced by other means.
<br>
(5)Proceed the normal BFS to find the shortest path.
<br>
(6)2nd approach uses octal number system for board states & bitset for recording visiting.

<br>

Time complexity:
O(720)

Space complexity:
O(720)