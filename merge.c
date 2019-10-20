
/*合并算法  数据结构  待测试*/

int* merge(int arr[], start, mid, end)
{    
    int arrTmp[];
    int i=0,j=0;
    while(start<mid&&mid<end)
    {
       if(arr[start]<=arr[mid])
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
	for(j=start;j<mid;j++)
        {
            arrTmp[i]++=arr[j];
        }
    }
    else
    {
        for(j=mid;j<end;j++)
        {
	    arrTmp[i++]=arr[j];
        }
    }
    return arrTmp;
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
