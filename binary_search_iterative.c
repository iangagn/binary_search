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
    
    int low = 0;
    int high = length - 1;
    
    while (low <= high)
    {
        
        int mid = (low + high) / 2;
        
        if (arr[mid] < search_key)      // Ignore left half
        {
            low = mid + 1;
        }
        else if (arr[mid] > search_key) // Ignore right half
        {
            high = mid - 1;
        }
        else
        {
            return mid;             // Found at mid
        }
        
    }
    
    // Not found -> return default value
    return -1;
    
}
