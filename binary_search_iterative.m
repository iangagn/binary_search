function idx = binary_search_iterative(arr, search_key)

%     Performs iterative binary search on a sorted integer array. 
%     
%     Parameters
%     ----------
%     arr : double
%         A sorted integer array.
%        
%     search_key : double
%         Value to look for in input array.
%         
%     Returns the index at which the value is found or the negative 
%     value of the insertion point of the missing value.

low = 1;
high = numel(arr);

while (low <= high)
    
    mid = floor(low + (high - low) / 2);
    
    if (arr(mid) < search_key)
        low = mid + 1;
    elseif (arr(mid) > search_key)
        high = mid - 1;
    else
        idx = mid;
        return
    end
    
end

% Return negative insertion point
idx = -low;

end
