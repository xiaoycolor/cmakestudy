#include <sort/sort.h>

QuickSort::QuickSort(std::vector<int> &raw_data)
{
    setData(raw_data);
}

//{3,2,4,5,7,8,0}
//{0,2,4,5,7,8,3}
void QuickSort::mySort(int start, int end, std::vector<int> &data)
{
    int tmp_start = start;
    int tmp_end = end;
    if (start >= end)
        return;
    int tmp = data[end];
    while (start < end)
    {
        while (data[start] <= tmp)
        {
            start++;
            if (start >= end)
                break;
        }

        data[end] = data[start];
        while (data[end] >= tmp)
        {
            if (start >= end)
                break;
            end--;
        }
        data[start] = data[end];
    }
    data[start] = tmp;
    mySort(tmp_start, start - 1, data);
    mySort(end + 1, tmp_end, data);
}

void QuickSort::sort()
{
    auto data = getData();
    int size = data.size();
    int start = 0;
    int end = size - 1;
    mySort(start, end, data);
    printData(data);
}