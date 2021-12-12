def binary_search_recursive(arr, low, high, val):
  """
  Performs iterative binary search on a sorted array. 

  Parameters
  ----------
  arr : list, tuple or set
    A sorted linear container of integers of floats.
  
  low : int
    Lower bound of interval.

  high : int 
    Upper bound of interval.

  val : int or float
    A value to look for in arr. 
  """

  if low <= high:

      mid = (high + low) // 2

      if arr[mid] < val: 
          return binary_search(arr, mid + 1, high, val) # Ignore left half
      elif arr[mid] > val:
          return binary_search(arr, low, mid - 1, val)  # Ignore right half
      else:
          return mid                                    # Found at mid

  else:
      
      # Not found -> return default value
      return -1
