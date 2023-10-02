

int totalSum(const int sum[])
{
    int total{ 0 };
    for (int i = 0; i < 3; i++)
    {
        total += sum[i];
    }
    return total;
}