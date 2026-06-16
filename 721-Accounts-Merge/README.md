# 721. Accounts Merge

LeetCode: https://leetcode.com/problems/accounts-merge/

Problem
- Given a list of accounts where each account is a list of strings, the first string is the name and the rest are emails. Merge accounts that share at least one common email and return the merged accounts with unique emails sorted lexicographically.

Example
- Input: [
		["John","johnsmith@mail.com","john_newyork@mail.com"],
		["John","johnsmith@mail.com","john00@mail.com"],
		["Mary","mary@mail.com"],
		["John","johnnybravo@mail.com"]
	]
- Output: [
		["John","john00@mail.com","john_newyork@mail.com","johnsmith@mail.com"],
		["Mary","mary@mail.com"],
		["John","johnnybravo@mail.com"]
	]

Idea / Approach
- Build a graph linking emails that belong to the same account (or use Union-Find on emails).
- Map each email to its owner name (first occurrence). For each account, union all emails in that account.
- After unions, group emails by their root parent, sort emails per group, and prepend the owner name.

Complexity
- Time: O(A log A) where A is total number of emails (union/find and sorting); Union-Find operations are nearly O(1) amortized.
- Space: O(A) for maps and union-find structures.

Solution
- See the implementation: [accounts-merge.cpp](accounts-merge.cpp#L1)

Notes
- Emails in each merged account are returned sorted for determinism; the owner name is taken from the original accounts mapping.

