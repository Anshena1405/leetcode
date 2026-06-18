// Remove Duplicates from Sorted Array

int removeDuplicates(int* num,int numsize)
{
    if(numsize == 0)
    {
        return 0;
    }

    int j = 0;
    for(int i =1;i<numsize;i++)
    {
        if(num[j] != num[i])
        {
            j++;
            num[j] = num[i];
        }
    }
    return j+1;
}
