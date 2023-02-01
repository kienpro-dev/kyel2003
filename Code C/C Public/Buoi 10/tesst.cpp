#include<iostream>

using namespace std;

void input(int &n)
{
    do
    {
        cin >> n;
    } while (n<1 || n>50);
}

void arrayIn(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cin >> *(a+i) ; //cin >> a[i];
    }
}

void arrayOut(int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        cout << *(a+i) << " "; //cout << a[i];
    }
    cout << endl;
}

void addElements(int *a, int &n, int idx, int val)
{
    for(int i=n;i>idx;i--)
    {
        *(a+i)=*(a+i-1);
    }
    *(a+idx)=val;
    n++;
}

void addElementsByCondition(int *a, int &n, int val)
{
    for(int i=0;i<n;i++)
    {
        if(*(a+i)<val)
        {
            a=(int *)realloc(a,(n+1)*sizeof(int));
            addElements(a,n,i+1,val);
            i++;
        }
    }
}

void deleteElements(int *a, int &n,int idx)
{
    for(int i=idx;i<n;i++)
    {
        *(a+i)=*(a+i+1);
    }
    n--;
}

void deleteDuplicateElements(int *a, int &n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(a+i)==*(a+j))
            {
                deleteElements(a,n,j);
                a=(int *)realloc(a,(n-1)*sizeof(int));
            }
        }
    }
}

int main()
{
    int n=6;
    input(n);
    int *a=new int[n]; // *a=(int *)calloc(n, sizeof(int));
                        // *a=(int *)malloc(n*sizeof(int));
    arrayIn(a,n);
    arrayOut(a,n);
    int x;
    cin >> x;
    deleteDuplicateElements(a,n);
    arrayOut(a,n);
    delete[] a;//free(a);
    return 0;
}