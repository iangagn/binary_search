int binary_search_iterative(const int* arr,
                            const int length,
                            const int search_key) 
{
    
    /*
    Performs iterative binary search on a sorted integer array. 
    
    Parameters
    ----------
    arr : int*
        A sorted integer array.
    
    length : int
        Size of input array.
        
    search_key : int
        Value to look for in input array.
        
    Returns the index at which the value is found or -1.
    */
    
    size_t low = 0;
    size_t high = arr_size;
    
    while (low < high)
    {
        // Prevents overflow compared to (high + low)/2
        size_t mid = low + (high - low) / 2;
        
        // Single test results in branchless code 
        if (arr[mid] <= target)
        {
            low = mid;
        } 
        else 
        {
            high = mid;
        } 
    }
    
    if (length > 0 && arr[low] == search_key)
    {
      // Returns the lowest index for a match
      return low;
    }
    else
    {
      // Not found -> return default value
      return -1; 
    }
      
}
