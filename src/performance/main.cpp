#include <common.h>

int loop(char *c_type, int num)
{
    int res = 1;
    register int res1 = 1;
    int r0 = 0, r1 = 0, r2 = 0, r3 = 0;
    register int r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    int type = atoi(c_type);
    switch (type)
    {
    case 0:
        for (int i = 1; i <= num; i += 4)
        {
            res += i;
            res += i + 1;
            res += i + 2;
            res += i + 3;
        }
        break;
    case 1:
        for (int i = 1; i <= num; i += 4)
        {
            r0 += i;
            r1 += i + 1;
            r2 += i + 2;
            r3 += i + 3;
        }
        res = r0 + r1 + r2 + r3;
        break;
    case 2:

        for (int i = 1; i <= num; i += 4)
        {
            r4 += i;
            r5 += i + 1;
            r6 += i + 2;
            r7 += i + 3;
        }
        res1 = r4 + r5 + r6 + r7;
        break;
    default:
        for (int i = 1; i <= num; i++)
        {
            res += i;
        }
        break;
    }
    if (type == 2)
    {
        return res1;
    }
    else
    {
        return res;
    }
}

int main(int argc, char **argv)
{
    int count = 10000;
    auto start = std::chrono::system_clock::now();
    auto end = start;

    int loop_iter_num = 5000000;
    if (argc == 2)
    {
        char *type = argv[1];
        start = std::chrono::system_clock::now();
        loop(type, loop_iter_num);
        end = std::chrono::system_clock::now();
    }
    else if (argc == 1)
    {
        start = std::chrono::system_clock::now();
        loop("100", loop_iter_num);
        end = std::chrono::system_clock::now();
    }
    else
    {
        std::cout << "para error" << std::endl;
    }
    std::chrono::duration<double> dura = end - start;
    std::cout << "共耗时：" << dura.count() << "s" << std::endl;
    return 0;
}