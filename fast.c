int fastsort(arr, start, end)
{   int key = arr[start];
    int pos = start;
    while(start<end)
	{
        while(arr[end]>arr[pos]&&start<end)
	    {
            end--;			
	    }
	    a[start] = a[end];
	   
	    while(arr[start]<key&&start<end)
	    {
			start++;
	    }
		a[end] = arr[start];	
	}
    
	a[start] = key;
	return start;
	
}

void partiton(arr,start,end)
{   
    if (start >= end)
	{
	    return;
	}
    key = fastsort(arr,start,end);
    partiton(arr, start, key);
	partiton(arry, key, end);	
}
