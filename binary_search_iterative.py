def binary_search(arr, val):
  """
  Performs iterative binary search on a sorted array. 

  Parameters
  ----------
  arr : list, tuple or set
    A sorted linear container of integers of floats.
    
  val : int or float
    A value to look for in arr. 
  """

  l = 0
  high = len(arr) - 1

  while low <= high:

      mid = (low + high) // 2

      if arr[mid] < val:    # Ignore left half + keep searching
          low = mid + 1
      elif arr[mid] > val:  # Ignore right half + keep searching
          high = mid - 1
      else:                 # Found at mid
          return mid

  # Not found -> return default value
  return -1
