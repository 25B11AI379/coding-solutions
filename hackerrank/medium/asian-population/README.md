# Employee Salaries

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given the **CITY** and **COUNTRY** tables, query the sum of the populations of all cities where the *CONTINENT* is *'Asia'*.
    
**Note:** *CITY.CountryCode* and *COUNTRY.Code* are matching key columns.


**Input Format**

The **CITY** and **COUNTRY** tables are described as follows:
<img src="https://s3.amazonaws.com/hr-challenge-images/8137/1449729804-f21d187d0f-CITY.jpg" title="CITY.jpg" />

<img src="https://s3.amazonaws.com/hr-challenge-images/8342/1449769013-e54ce90480-Country.jpg" title="Country.jpg" />

**Constraints**

 

**Output Format**

## Solution

**Language:** db2  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-24T18:15:13.552Z  

```db2

/*
    Enter your query here and follow these instructions:
    1. Please append a semicolon ";" at the end of the query and enter your query in a single line to avoid error.
    2. The AS keyword causes errors, so follow this convention: "Select t.Field From table1 t" instead of "select t.Field From table1 AS t"
    3. Type your code immediately after comment. Don't leave any blank line.
*/
SELECT name from Employee
where salary > 2000 and months <10
order by employee_id asc;

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/asian-population/problem)