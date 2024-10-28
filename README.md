# LeetCode-Problem
Remove All Occurrences of a Substring  Problem No= 1910  Medium
<br>
Approach  st =0 , end = n-1 
<br>
while(st &lt; end)
<br>
{ is alphaNumeric(!str{st})  st++
<br>
end --
<br>
if(str[st] = str[end])
<br> 
Valid Palindrome
<br>
approach 
<br>
AlphaNumeric 
<br>
a-z, A-Z, 0-9
<br>
concept


 while(s.length()>0 && s.find(part) <s.length())
        {
            s.erase(s.find(part),part.length());
        }
        return s;
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


