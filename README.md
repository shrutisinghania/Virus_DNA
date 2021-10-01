# Virus DNA

As a future doctor, Jojo works in a laboratory that analyzes viral DNA. Due to the pandemic virus outbreak, Jojo received many requests to analyze whether there was viral DNA in the patient. The number of requests made Jojo's job even more difficult. Therefore, Jojo asked for the help of Lili, who is a programmer, to develop a program that can read files containing patient DNA data and viral DNA and then match them. 

If the patient's DNA finds the exact same string pattern, then write to the index screen where the DNA was found. The data is contained in the file testdata.in 

# Input Format:
The first line of input is the number of test cases T 

The second line and so on as many as T lines are the S1 string of patient DNA and the S2 string of viral DNA separated by spaces 


# Output Format: 
The array index found the same string pattern.


# Constraints:

𝟏 ≤ 𝑻 ≤ 𝟏𝟎𝟎

𝟑 ≤ |𝑺𝟐| ≤ |𝑺𝟏| ≤ 𝟏𝟎𝟎

|S| is the length of the string.

S will only consist of lowercase letters [a-z]



# Sample Input Output 1
## Input :

6

ababab ab cdefgh 

def pxzzt xyz ijklijkl 

ijkl kjldfjdlsjf nnn

icumeyb oeibv

## Output :

0 2 4

1

N/A

0 4

N/A

N/A


# Sample Input Output 2
## Input :

3

zzz zz 

xoxozy bc


oqryc yc

## Output :

0 1

N/A 

3

# Explanantion
In input 1: ababab ab the string pattern 'ab' is found at index 0, 2 and 4 

In input 2: zzz zz the string pattern 'zz' is found at index 0 and 1
