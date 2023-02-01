class ArrayCalculator
{
public:
    static int maxOfArray(int a[], int n)
    {
        int max = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
    }
    static double maxOfArray(double a[], int n)
    {
        double max = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] > max)
                max = a[i];
        return max;
    }
    static int minOfArray(int a[], int n)
    {
        int min = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] < min)
                min = a[i];
        return min;
    }
    static double minOfArray(double a[], int n)
    {
        double min = a[0];
        for (int i = 1; i < n; i++)
            if (a[i] < min)
                min = a[i];
        return min;
    }
};