int binary_search_iterative(int* arr,
                            const int arr_size,
                            const int target) 
{
    
    /*
    Performs iterative binary search on a sorted integer array. 
    
    Parameters
    ----------
    tab : int*
        A sorted integer array.
    
    arr_size : int
        Size of input array.
        
    target : int
        Value to look for in input array.
        
    Returns the index at which the value is found or -1.
    */
    
    int low = 0;
    int high = arr_size;
    
    while (low <= high)
    {
        
        int mid = (low + high) / 2;
        
        if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (tab[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            return mid;    
        }
        
    }
    
    return -1;
    
}