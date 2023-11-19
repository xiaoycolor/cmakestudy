#include <sort/sort.h>

int main()
{
    std::vector<int> data = {3, 2, 4, 5, 7, 8, 0, 9, 23, 45, 21, 88, 56, 12, 1};
    std::shared_ptr<QuickSort> mysort = std::make_shared<QuickSort>(data);
    mysort->sort();
    return 0;
}