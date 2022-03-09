 int size_of_array_arr()
{
    int n = 3;

    int *arr = new int[n];
    return (sizeof(*arr)*3);
}