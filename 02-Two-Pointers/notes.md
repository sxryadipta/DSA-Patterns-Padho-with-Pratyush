# Two Pointers

The two-pointers pattern uses two indices that move through an array or string. It often replaces a nested loop with a linear scan when the input has an order, partition, or pair relationship that the pointers can exploit.

## When to use it

Look for problems that involve:

- finding a pair in a sorted array;
- comparing elements from opposite ends;
- partitioning values into regions;
- removing or overwriting elements in place;
- maintaining a window or boundary while scanning.

## Common variants

### Opposite-direction pointers

Start one pointer at each end and move them toward each other. This is useful for palindrome checks, pair sums in sorted arrays, and container-style problems.

### Same-direction pointers

A fast pointer scans the input while a slow pointer tracks where the next valid element belongs. This is useful for removing duplicates and compacting arrays in place.

### Partitioning pointers

Pointers mark the boundaries of groups. The Dutch National Flag algorithm is a three-pointer partitioning technique for arrays containing three categories.

## Dutch National Flag invariant

For the Sort Colors problem, maintain these regions:

- `[0, low)` contains only `0`s;
- `[low, mid)` contains only `1`s;
- `[mid, high]` is not processed yet;
- `(high, n)` contains only `2`s.

While `mid <= high`:

1. If `nums[mid] == 0`, swap it with `nums[low]`, then increment both pointers.
2. If `nums[mid] == 1`, increment `mid`.
3. If `nums[mid] == 2`, swap it with `nums[high]` and decrement `high`. Do not increment `mid` because the swapped-in value has not been inspected.

This produces an in-place, one-pass solution with `O(n)` time and `O(1)` extra space.

## Common pitfalls

- Moving `mid` after swapping with `high` can skip an unprocessed value.
- Using two pointers without a clear invariant makes boundary errors likely.
- A counting solution is linear but uses two passes; Dutch National Flag performs the partition in one pass.
- Always check whether the input must be sorted before applying a pair-sum strategy.
