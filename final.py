def union(arr1,arr2):

     for element in arr2:
          if element not in arr1:
              arr1.append(element)
     return arr1


def intersection(arr1, arr2):
    arr3 = [value for value in arr1 if value in arr2]
    return arr3


arr1 = [1, 2, 3, 4, 5, 6]
arr2 = [2, 5, 7, 8, 1]
print("Yugesh Jhamb")
print("20BCS5510")
print("Union of two arrays:")
print(union(arr1, arr2))
print("Intersection of two arrays: ")
print(intersection(arr1, arr2))

