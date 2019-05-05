merge(int arr[], start, mid, end)
{    
    int arrTmp[];
    while(start<mid&&mid<end)
    {
       if(arr[start]<=arr[end])
       {
        arrTmp[i++]=arr[start++];
       }
    else
       {
        arrTmp[i++]=arr[mid++];
        }
    }
    
    if(start<mid)
    {
    }
    if()
    
}


mergeSort(int arr[], start,  end)
{
    mid = (start+end)/2; 
    if(mid==start)
    return;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid, end);
    arr = merge( arr, start, mid, end);
}

void main()
{

}
