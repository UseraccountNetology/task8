#include <iostream>
#include <vector>

using namespace std;

void search_dubl(std::vector<int> &a)
{
    int value=0;

    for(int i=0;i<a.size();i++)
    {
        value=a[i];

        for(int j=0;j<a.size();j++)
        {
            if(i!=j)
            {
                if(value==a[j])
                {
                    a.erase(a.begin()+j);
                }
            }
        }
    }
}

//точка входа
int main()
{
    //список чисел
    std::vector<int> listVector={1,2,3,4,4,5,5,6,6};

    //поиск иудаление дубликатов
    search_dubl(listVector);

    cout << "Hello World!" << endl;
    return 0;
}
