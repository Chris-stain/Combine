# Combine
A c++ program that combines two arrays.


Create a function named combine. Its parameters are an array of integers, the size of the array, a second array of integers, and the size of the second array.

```
void combine(int arr1[], int &size1, int arr2[], int size2) {
    // . . .
}
```

This function will insert the contents of array 2 into the middle of the contents of array 1 and will update the value of the size variable. It is safe to assume that array 1’s capacity is large enough to hold the contents of array 1 + the contents of array 2.

Below is an example of how array 1 should look like before and after the function call. Note that array 1 is initialized with a capacity of 10, but the size variable is set to 6 because we are only using 6 indices initially. The remaining indices are put to use when combining the arrays.


# Before
## Array 1
| INDEX |	0 |	1 |	2 |	3 |	4 |	5 |	6 |	7 |	8 |	9 |
| ----- | - | - | - | - | - | - | - | - | - | - |
| ELEMENT |	1 |	2 |	3 |	4 |	5 |	6 |	- |	- |	- |	- |

SIZE : 6

## Array 2
| INDEX |	0 |	1 |	2 |	3 |
| ----- | - | - | - | - |
| ELEMENT |	20 |	20 |	22 |	23 |

SIZE : 4

# After
## Array 1
| INDEX |	0 |	1 |	2 |	3 |	4 |	5 |	6 |	7 |	8 |	9 |
| ----- | - | - | - | - | - | - | - | - | - | - |
| ELEMENT |	1 |	2 |	3 |	20 |	21 |	22 |	23 |	4 |	5 |	6 |

SIZE: 10
