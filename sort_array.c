#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){

    int container;
    int count;

count = 0;
    while (count < (size-1))
    {
        if (tab[count]>tab[count + 1])
        {
            container = tab[count];
            tab[count] = tab[count + 1];
            tab[count +1] = container;
            count = 0;
        }
        else 
        {
            count++;
        }
    }
}

int main(void) {
    int myarr[6] = {3,2,4,7,10,1};
    int size = 6;
    int index = 0;

    ft_sort_int_tab(myarr, size);

    while (index<6){
    printf("%d", myarr[index]);
    index++;
    }

    return (0);
}