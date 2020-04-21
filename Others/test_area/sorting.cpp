#include <iostream>

void swap(int *, int *);
void sort(int *, int);

int main()
{
    const int n = 10;
    int nums[n] = {10, 30, 50, 70, 90, 20, 40, 60, 80, 100};

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (nums[i] < nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }

    for (int i = 0; i < n; i++)
        std::cout << nums[i] << " ";
    std::cout << std::endl;

    return 0;
}
