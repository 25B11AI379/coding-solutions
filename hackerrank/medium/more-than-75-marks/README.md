# Higher Than 75 Marks

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Query the *Name* of any student in **STUDENTS** who scored higher than $75$ *Marks*. Order your output by the *last three characters* of each name. If two or more students both have names ending in the same last three characters (i.e.: Bobby, Robby, etc.), secondary sort them by ascending *ID*.

**Input Format**

The **STUDENTS** table is described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/12896/1443815243-94b941f556-1.png" />
The *Name* column only contains uppercase (`A`-`Z`) and lowercase (`a`-`z`) letters.

**Constraints**

 

**Output Format**

## Solution

**Language:** db2  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T18:02:34.498Z  

```db2

/*
    Enter your query here and follow these instructions:
    1. Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
    2. The AS keyword causes errors, so follow this convention: "Select t.Field From table1 t" instead of "select t.Field From table1 AS t"
    3. Type your code immediately after comment. Don't leave any blank line.
*/
select NAME from STUDENTS 
where MARKS>75 
order by right(NAME,3) ASC, ID asc;

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/more-than-75-marks/problem)