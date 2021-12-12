int binary_search_recursive(const int* arr,
                            const int arr_size,
                            const int low,
                            const high,
                            const int target)
{  
    /*
    Performs recursive binary search on a sorted integer array. 
    
    Parameters
    ----------
    tab : int*
        A sorted integer array.
    
    arr_size : int
        Size of input array.
        
    low : int
        Lower bound of interval.
        
    high : int
        Upper bound of interval.
    
    target : int
        Value to look for in input array.
        
    Returns the index at which the value is found or -1.
    */
    
    if (low <= high)
    {
        
        int mid = (low + high) / 2;
        
        if (arr[mid] < target)
        {
            // Ignore left half
            return binary_search_recursive(arr, 
                                           arr_size, 
                                           mid + 1, 
                                           high, 
                                           target);
        }
        else if (arr[mid] > target)
        {
            // Ignore right half
            return binary_search_recursive(arr, 
                                           arr_size, 
                                           low, 
                                           mid - 1, 
                                           target);
        }
        else
        {
            // Found at mid
            return mid;    
        }
    }
    else
    {
        // Not found -> return default value
        return -1;
    }
    
}
