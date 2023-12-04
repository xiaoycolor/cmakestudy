#include <common.h>

class SortFactory
{
public:
    void setData(std::vector<int> &raw_data)
    {
        data_ = raw_data;
    }
    std::vector<int> &getData()
    {
        return data_;
    }
    void printData(std::vector<int> &sorted_data)
    {
        for (auto item : sorted_data)
        {
            std::cout << item << " ";
        }
        std::cout << std::endl;
    }
    virtual void sort(){};

private:
    std::vector<int> data_;
};

class QuickSort : public SortFactory
{
public:
    QuickSort() {};
    QuickSort(std::vector<int> &raw_data);
    void sort();
    void sort1(std::vector<int> &data);
    void mySort(int start, int end, std::vector<int> &data);
};