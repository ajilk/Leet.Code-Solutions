## [001. Two Sum](https://leetcode.com/problems/two-sum/)

We want to be able quickly check if the current element has a
complement (target-nums[current]).  
One way to do that is to use map (specifically unordered_map for faster access). 
KEY: value of the element 
VALUE: index of the element
	if [2,7,9 ...]
		key = 2
		value = 0

We iterate through nums to find it is complement.
```
If found, return 
	complement's and current index
If not found, insert into map:
	num element (key) and index (value) 
```